### Doc


Eine vollständige Applikationsbeschreibung ist unter folgendem Link verfügbar: https://github.com/openknx/SOM-UP/blob/v1/doc/Applikationsbeschreibung-Soundmodul.md

Das SOM-UP kann aktuell mit zwei verschieden Playern bestückt werden. Der alte Player (DY-SV17F) ist komplett Eingeständig und bringt daher einen eigenen Flashspeicher (4MB) mit und wird daher auch unabhängig über einen eigenen USB-Anschluss befüllt. Ich kann weder prüfen, ob eine Datei vorhanden ist, noch Dateien per KNX auf diesem ablegen.

Der neue Player hingegangen, ist eigentlich kein richtiger Player, sondern eher wie ein Verstärker zu betrachten. Hierbei werden die Audio-Signale per I2S übermittelt und ausgegeben. Das komplette Dekodieren der MP3, erledigt somit das SOM-UP selber. Dieser kann nicht nur MP3, WAV sondern auch RTTTL (Ringtones) abspielen und sogar eigene Töne (Buzzer) generieren. Die Daten können hierbei auf dem internen Speicher abgelegt werden (von bis zu 14MB nutzbar sind). Auch ein Übertagen der Dateien per KNX ist möglich, so dass ein Ausbauen nicht mehr nötig ist.

Alternativ können die Dateien auch per USB übertragen werden. Hierzu simuliert das SOM-UP einen virtuellen USB-Stick mit einem Eingangsordner. Nach dem Auswerfen werden die Dateien in diesem Ordner auf den internen Speicher verschoben. Dieser Modus kann per Doppelklick auf die PROG-Taste gestartet, wie auch beendet werden (Alternativ über das Betriebssystem auswerfen).
Hinweis: Da der virtuelle Speicher auf ca. 1MB limitiert ist, kann es nötig sein, die Daten in mehreren Tranchen zu kopieren. Anhand des Blinkens, kann geprüft werden, ob der Kopiervorgang abgeschlossen wurde und man erneut USB-Modus starten kann.

