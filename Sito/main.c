/**
 * Simuliamo l’accesso a un sito con un menù in cui chiediamo all’utente se vuole registrarsi o accedere.
 * 
 * REGISTRAZIONE: viene chiesto in input il nome utente con questo formato nome.cognome e la password, che deve comprendere almeno una lettera maiuscola e un carattere speciale a scelta tra _ | £ /.
 * La PWD deve poi essere “criptata” sostituendo le vocali come segue:
 * a ⇒ @
 * o ⇒ 0
 * e ⇒ *
 * i ⇒ 1
 * u ⇒ $
 * ESEMPIO: se l’utente Aldo Baglio ha inserito la PWD Prova, la stringa da memorizzare sarà la seguente:
 * aldo.baglio Pr0v@
 * Ogni nuovo utente registrato viene memorizzato
 * inizializzando un'opportuna struct e
 * scritto su un file "registrazione.txt"
 * Il file sarà a disposizione del "computer" affinchè ne legga utente e password ogni volta che un utente cerca di accedere al sito.
 * Il file sarà scritto in questo formato:
 * nome;cognome;id_utente;password_criptata
 * 
 * ACCESSO: vengono chiesti in input il nome utente e la PWD.
 * La PWD dovrà essere criptata prima di confrontarla con quella memorizzata su file.
 * Il programma deve poi accedere al file e leggere i dati, trovare l'utente e, se la password coincide, deve comunicare a video “accesso effettuato” altrimenti “PWD errata”.
 * 
 * Il menu deve prevedere la possibilità che un amminsitratore, dotato di opportuna password, possa accedere ad un file nel quale si possa leggere l'elenco degli utenti registrati, scritti in ordine alfabetico, sotto il formato
 * nome cognome
 * nome cognome
 * nome cognome
 * ... 
*/

#include "lib.h"

int main()
{
    azioni();
}