#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>

//! \brief Klasa statystyki.
//!
//!

class Statistics{
public:
    /**
    * @brief  opis funkcji.
    *
    * Pelny opis funkcji, co robi funkcja.
    *
    * @param nazwa_parametru Opis parametru wejsciowego.
    * @param [nazwa_parametru2=wartoscdomyslna] Opis parametru opcjonalnego z wartoscia domyslna.
    *
    * @return Opis zwracanej wartosci.
    *
    * @see nazwa_innej_funkcji
    * @see Klasa::metoda
    * @see http://adres.pl Link do dokumentacji zewnetrznej.
    *
    * @warning Uwaga dotyczaca funkcji.
    * @todo Zadanie do wykonania.
    * @bug blad w funkcji.
    * @deprecated Funkcja jest przestarzala.
    *
    * @note Notatka dodatkowa.
    *
    * @par Przyklad uzycia:
    * @code
    * int x = funkcja(5);
    * cout << x << endl;
    * @endcode
    */
    Statistics(int x, int y);
    Statistics(Statistics kopia);
    ~Statistics();
    int accessX();
    int accessY();
    float oblicz();
    float oblicz1();
private:
    //! Parametry statystyki.
    int x, y;
}

#endif
