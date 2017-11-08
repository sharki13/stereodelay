/********************************************************************
	created:	2012/04/14
	created:	14:4:2012   1:32
	filename: 	c:\dev\projects\juce\stereodelay2_juce - stereo_mod\Source\soundgoodies.h
	file path:	c:\dev\projects\juce\stereodelay2_juce - stereo_mod\Source
	file base:	soundgoodies
	file ext:	h
	author:		Sharki
	
	purpose:	Klasy w³asne haha
*********************************************************************/

#ifndef __sound_goodies__  //zabezpieczenie przed wielokrotnym dodawaniem
#define __sound_goodies__

#define M_PI 3.1415926535897932384626433832795 /*< Definicja sta³ej PI */
//==============================================================================
//! Klasa DelayLine
/*!
  Dostarczajaca kompleksowa oblsuge linii opozniajacej z dynamiczna alokacja
  pamieci dla tablicy jako rejestru przesuwnego (buforu).
*/
class DelayLine
{
public:
//==============================================================================
	//! Konstruktor
	/*!
	  Przypisuje wartosc <tt>NULL</tt> wskaznikowi na tablice buforu, z uwagi na bezpieczenstwo.
	  Proba skasowania operatorem delete obiektu wskazywanego przez wskaznik o wartosci <tt>NULL</tt>
	  nie powoduje niebezpieczenstwa usuniecia nie przydzielonego obszaru pamieci. Zeruje zmienne odpowiedzialne
	  za informowanie o rozmiarze buforu oraz pozycji wskaznika na aktualnie przetwarzane miejsce w buforze.
	*/

	DelayLine() 
	{
		delayBufferTab = NULL;
		bufferSize = 0;
		delayPosition = 0;
	};
//==============================================================================	

	//! Destruktor
	/*!
	  Zwalnia obszar pamieci zajmowanej przez bufor, przypisuje wskaznikowi na bufor wartosc
	  <tt>NULL</tt> oraz zeruje zmienna inforumjaca o wielkosci buforu.
	*/
	~DelayLine() 
	{
		delete[] delayBufferTab;
		delayBufferTab = NULL;
		bufferSize = 0;
	};
//==============================================================================

	//! Czysci bufor
	/*!
	  Czysci bufor wypelniajac go zerami.
	*/
	void clearBuffer() 
	{
		if(delayBufferTab)
		{
			for(int i=0; i < bufferSize; i++)
			{
				delayBufferTab[i] = 0;
			}	
			delayPosition = 0;
		}
	};
//==============================================================================

	//! Zmienia rozmiar buforu
	/*!
	  Zmienia rozmiar buforu. Kasuje aktualny bufor, alokuje pamiec tablocy typu float o
	  liczbie elementow podanej w parametrze <tt>[newSize]</tt>. Czysci nowo zalokowany bufor.
	  \param newSize nowy rozmiar buforu.
	*/
	void changeBufferSize(int newSize) 
	{
		delete[] delayBufferTab;
		delayBufferTab = NULL;
		bufferSize = 0;
		delayPosition = 0;

		if((delayBufferTab = new float[newSize]) != 0)
		{
			bufferSize = newSize;
		}
		this->clearBuffer();
	};
//==============================================================================

	//! Zwraca rozmiar buforu
	/*!
	  \return Zwraca w postaci liczby typu <tt>int</tt> rozmiar buofru. 
	*/
	int getBufferSize() 
	{
		return (bufferSize);
	};
//==============================================================================

	//! Zawraca wartosc probkiz buforu
	/*!
	  \return Zwraca wartosc probki przechowywyanej w buforze w komorce wskazywanej przez zmienna <tt>[delayPosition]</tt>.
	*/
	float getSampleFromBuffer() 
	{
		if(delayBufferTab)
			return (delayBufferTab[delayPosition]);
	};
//==============================================================================

	//! Zapisuje do buforu
	/*!
	  Zapisuje do buforu nastepna probke, nastepnie przesuwa wskaznik delayPostion.
	  \param bufferIn wartosc probki ktora ma byc zapisana do buforu.
	  \param samplesDelay opoznienie w probkach.
	*/
	void pushSampleToBuffer(float bufferIn, int samplesDelay) 
	{
		delayBufferTab[delayPosition] = bufferIn;
		if(++delayPosition > (samplesDelay - 1)) delayPosition = 0;
	};
//==============================================================================
private:
	//! Wskaznik na tablice bufora.
	float* delayBufferTab;

	//! Wskaznik na aktualnie przetwarzana komorke w buforze.
	int delayPosition;

	//! Rozmiar buforu.
	int bufferSize;

	//! Zmienna pomocnicza przy realokacji tablicy buforu.
	int sizeCheck;
};
//==============================================================================
//! Klasa onePoleFilter
/*!
  Dostarcza prosty filtr dolnoprzepustowy pierwszego rzedu.
*/
class onePoleFilter
{
public:
//==============================================================================
	//! Konstruktor
	/*!
	  Zeruje wewnetrzne zmienne.
	*/
	onePoleFilter()
	{
		tmp = 0;
		a0 = 0;
		b1 = 0;
		x = 0;
		out = 0;
	};
//==============================================================================
	
	/*!
	  Proces filtracji sygnalu.
	  \param in0 wartosc probki sygnalu filtrowanego.
	  \returns wartosc probki po filtracji.
	*/
	float filter(float in0)
	{
		out = a0*in0 - b1*tmp;
		tmp = out;
		return out;
	};
//==============================================================================

	//! Metoda do obliczania wspoczlinnikow filtru
	/*!
	  \param freq czestotliwosc filtru
	  \param samplerate czesotliwosc probkowania systemu
	*/
	void calcCeoffs(float freq, float samplerate)
	{
		x = exp(-2.0* M_PI *freq/samplerate);
		a0 = 1.0 - x;
		b1 = -x;
	};
//==============================================================================
private:

	float tmp;
	float a0;
	float b1;
	float in;
	float out;
	float x;		
};
//==============================================================================
//! Klasa midSide
/*!
  Daje obluge prostego konwertera poiedzy systemami Stereo LR i Mid-Side
*/
class midSide
{
public:
//==============================================================================
	/*!
	  Rozklada sygnal w systemie LR na MS
	  \param inL sygnal kanalu lewego
	  \param inR sygnal kanalu prawego
	  \return sygnal side
	*/
	float extractSide(float inL, float inR)
	{
		return (inL-inR);
	};
//==============================================================================

	/*!
	  Rozklada sygnal w systemie LR na MS
	  \param inL sygnal kanalu lewego
	  \param inR sygnal kanalu prawego
	  \return sygnal middle
	*/
	float extractMiddle(float inL, float inR)
	{
		return (inL+inR);
	};
//==============================================================================

	/*!
	  Sklada z sygnalu MS sygnal w systemie LR
	  \param mid sygnal middle
	  \param side sygnal side
	  \return sygnal kanalu lewego
	*/
	float assemblyLeft(float mid, float side)
	{
		return ((mid+side)/2);
	};
//==============================================================================

	/*!
	  Sklada z sygnalu MS sygnal w systemie LR
	  \param mid sygnal middle
	  \param side sygnal side
	  \return sygnal kanalu prawego
	*/
	float assemblyRight(float mid, float side)
	{
		return ((mid-side)/2);
	};
};
//==============================================================================
//! Klasa PeakFollowe
/*!
  Obiekt tego typu daje latwa mozliwosc sledzenia chwilowej szczytowej wartosci sygnalu. Nadaje sie do sterowania wskaznikiem wysterowania.
*/
class PeakFollower
{
public:
//==============================================================================
	//! Konstruktor
	/*!
	  Zeruje zmienne wewnetrzne
	*/
	PeakFollower()
	{
		peak = 0;
		counter = 0;
	};
//==============================================================================
	//! Destruktor
	/*!
	  Nie ma nic ciekawego do roboty
	*/
	~PeakFollower()
	{
	};
//==============================================================================
	//! Wysyla aktualna probke sygnalu do peakFollowera
	/*!
	  \param sampleIn aktualna wartosc sygnalu sledzonego
	*/
	void sendSample(float sampleIn)
	{
		counter++;

		if(abs(sampleIn) > peak) peak = sampleIn;

		if (counter >= maxCounter)
		{
			peak = 0;
			counter = 0;
		}
	};
//==============================================================================
	//! Ustawia ogranicznik
	/*!
	  Determinuje ilosc cykli po ktorej wartosc maksymalna bedzie sledzona na nowo.
	*/
	void setMaxCounter(int __maxCounter)
	{
		maxCounter = __maxCounter;
	};
//==============================================================================
	//! Resetuje licznik
	/*!
	  Resetuje aktualna liczbe wykonanych cykli oraz wartosc szczytowa. Pomocne w momencie przerwania odtwarzania.
	*/
	void resetCounter()
	{
		counter = 0;
		peak = 0;
	};
//==============================================================================
	//! Pobierz wartosc maksymalna
	/*!
	  Zwraca wartosc szczytowa sledzonego sygnalu
	  \return wartosc szczytowa
	*/
	float getPeak(void)
	{
		return peak;
	};
//==============================================================================
private:

	int counter;
	int maxCounter;
	float peak;
};
//==============================================================================
#endif
//EOF