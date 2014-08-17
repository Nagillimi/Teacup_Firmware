// Thermistor lookup table for two different thermistors.
// EPCOS B57560G104F for hot end
// EOCOS B5786S0104F for bed

/*
   This table doesn't depend on the type of electronics, but on the type of
   thermistor(s) you use. You want one table for each thermistor type you use.
*/

// How many thermistor tables we have.
#define NUMTABLES 2

// Names for our tables, so you can use them in config.h.
// Table numbering starts at 0.
#define THERMISTOR_EXTRUDER   0
#define THERMISTOR_BED        1

/*
   You may be able to improve the accuracy of this table in various ways.

   1. Measure the actual resistance of the resistor. It's "nominally" 4.7K,
      but that's ± 5%.
   2. Measure the actual beta of your thermistor:
      http://reprap.org/wiki/MeasuringThermistorBeta
   3. Generate more table entries than you need, then trim down the ones
      in uninteresting ranges.

   In either case you'll have to regenerate this table with
   createTemperatureLookup.py, which requires python, which is difficult to
   install on windows. Since you'll have to do some testing to determine the
   correct temperature for your application anyway, you may decide that the
   effort isn't worth it. Who cares if it's reporting the "right" temperature
   as long as it's keeping the temperature steady enough to print, right?
*/

// The number of value pairs in our table.
// Must be the same for all tables.
#define NUMTEMPS 102

const uint16_t PROGMEM temptable[NUMTABLES][NUMTEMPS][2] = {

// Table for the Extruder.
// Thermistor: EPCOS B57560G104F

// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4555 --beta=4092 --max-adc=1023
{
{  29 ,  1200 }, // 300°C
{  30 ,  1188 }, // 297.029702970297°C
{  31 ,  1176 }, // 294.059405940594°C
{  33 ,  1164 }, // 291.089108910891°C
{  34 ,  1152 }, // 288.118811881188°C
{  35 ,  1141 }, // 285.148514851485°C
{  36 ,  1129 }, // 282.178217821782°C
{  38 ,  1117 }, // 279.207920792079°C
{  39 ,  1105 }, // 276.237623762376°C
{  41 ,  1093 }, // 273.267326732673°C
{  43 ,  1081 }, // 270.29702970297°C
{  44 ,  1069 }, // 267.326732673267°C
{  46 ,  1057 }, // 264.356435643564°C
{  48 ,  1046 }, // 261.386138613861°C
{  50 ,  1034 }, // 258.415841584158°C
{  52 ,  1022 }, // 255.445544554455°C
{  54 ,  1010 }, // 252.475247524752°C
{  57 ,  998 }, // 249.50495049505°C
{  59 ,  986 }, // 246.534653465347°C
{  62 ,  974 }, // 243.564356435644°C
{  64 ,  962 }, // 240.594059405941°C
{  67 ,  950 }, // 237.623762376238°C
{  70 ,  939 }, // 234.653465346535°C
{  73 ,  927 }, // 231.683168316832°C
{  77 ,  915 }, // 228.712871287129°C
{  80 ,  903 }, // 225.742574257426°C
{  84 ,  891 }, // 222.772277227723°C
{  88 ,  879 }, // 219.80198019802°C
{  92 ,  867 }, // 216.831683168317°C
{  96 ,  855 }, // 213.861386138614°C
{  101 ,  844 }, // 210.891089108911°C
{  106 ,  832 }, // 207.920792079208°C
{  111 ,  820 }, // 204.950495049505°C
{  116 ,  808 }, // 201.980198019802°C
{  122 ,  796 }, // 199.009900990099°C
{  128 ,  784 }, // 196.039603960396°C
{  134 ,  772 }, // 193.069306930693°C
{  141 ,  760 }, // 190.09900990099°C
{  148 ,  749 }, // 187.128712871287°C
{  155 ,  737 }, // 184.158415841584°C
{  163 ,  725 }, // 181.188118811881°C
{  172 ,  713 }, // 178.217821782178°C
{  180 ,  701 }, // 175.247524752475°C
{  190 ,  689 }, // 172.277227722772°C
{  199 ,  677 }, // 169.306930693069°C
{  210 ,  665 }, // 166.336633663366°C
{  220 ,  653 }, // 163.366336633663°C
{  232 ,  642 }, // 160.39603960396°C
{  244 ,  630 }, // 157.425742574257°C
{  256 ,  618 }, // 154.455445544554°C
{  269 ,  606 }, // 151.485148514851°C
{  283 ,  594 }, // 148.514851485149°C
{  297 ,  582 }, // 145.544554455446°C
{  312 ,  570 }, // 142.574257425743°C
{  328 ,  558 }, // 139.60396039604°C
{  344 ,  547 }, // 136.633663366337°C
{  361 ,  535 }, // 133.663366336634°C
{  378 ,  523 }, // 130.693069306931°C
{  396 ,  511 }, // 127.722772277228°C
{  415 ,  499 }, // 124.752475247525°C
{  434 ,  487 }, // 121.782178217822°C
{  454 ,  475 }, // 118.811881188119°C
{  474 ,  463 }, // 115.841584158416°C
{  494 ,  451 }, // 112.871287128713°C
{  515 ,  440 }, // 109.90099009901°C
{  537 ,  428 }, // 106.930693069307°C
{  558 ,  416 }, // 103.960396039604°C
{  580 ,  404 }, // 100.990099009901°C
{  602 ,  392 }, // 98.019801980198°C
{  624 ,  380 }, // 95.049504950495°C
{  646 ,  368 }, // 92.0792079207921°C
{  667 ,  356 }, // 89.1089108910891°C
{  689 ,  345 }, // 86.1386138613861°C
{  710 ,  333 }, // 83.1683168316832°C
{  730 ,  321 }, // 80.1980198019802°C
{  750 ,  309 }, // 77.2277227722772°C
{  770 ,  297 }, // 74.2574257425743°C
{  789 ,  285 }, // 71.2871287128713°C
{  807 ,  273 }, // 68.3168316831683°C
{  824 ,  261 }, // 65.3465346534653°C
{  841 ,  250 }, // 62.3762376237624°C
{  856 ,  238 }, // 59.4059405940594°C
{  871 ,  226 }, // 56.4356435643564°C
{  885 ,  214 }, // 53.4653465346535°C
{  899 ,  202 }, // 50.4950495049505°C
{  911 ,  190 }, // 47.5247524752475°C
{  922 ,  178 }, // 44.5544554455446°C
{  933 ,  166 }, // 41.5841584158416°C
{  942 ,  154 }, // 38.6138613861386°C
{  951 ,  143 }, // 35.6435643564356°C
{  959 ,  131 }, // 32.6732673267327°C
{  967 ,  119 }, // 29.7029702970297°C
{  973 ,  107 }, // 26.7326732673267°C
{  980 ,  95 }, // 23.7623762376238°C
{  985 ,  83 }, // 20.7920792079208°C
{  990 ,  71 }, // 17.8217821782178°C
{  994 ,  59 }, // 14.8514851485149°C
{  998 ,  48 }, // 11.8811881188119°C
{  1001 ,  36 }, // 8.91089108910891°C
{  1005 ,  24 }, // 5.94059405940594°C
{  1007 ,  12 }, // 2.97029702970297°C
{  1009 ,  0 } // 0°C
},

// Thermistor table for the Heatbed.
// The thermistor used for this table was an Epocs B5786S0104F

// ./createTemperatureLookup.py --r0=100000 --t0=25 --beta=4540 --max-adc=1023
{

{  177 ,  620 }, // 155°C
{  182 ,  614 }, // 153.5°C
{  188 ,  608 }, // 152°C
{  194 ,  602 }, // 150.5°C
{  200 ,  595 }, // 148.75°C
{  207 ,  589 }, // 147.25°C
{  213 ,  583 }, // 145.75°C
{  220 ,  577 }, // 144.25°C
{  227 ,  571 }, // 142.75°C
{  235 ,  565 }, // 141.25°C
{  242 ,  559 }, // 139.75°C
{  250 ,  552 }, // 138°C
{  258 ,  546 }, // 136.5°C
{  266 ,  540 }, // 135°C
{  274 ,  534 }, // 133.5°C
{  283 ,  528 }, // 132°C
{  291 ,  522 }, // 130.5°C
{  300 ,  516 }, // 129°C
{  310 ,  510 }, // 127.5°C
{  319 ,  503 }, // 125.75°C
{  329 ,  497 }, // 124.25°C
{  339 ,  491 }, // 122.75°C
{  349 ,  485 }, // 121.25°C
{  359 ,  479 }, // 119.75°C
{  370 ,  473 }, // 118.25°C
{  381 ,  467 }, // 116.75°C
{  392 ,  460 }, // 115°C
{  403 ,  454 }, // 113.5°C
{  415 ,  448 }, // 112°C
{  426 ,  442 }, // 110.5°C
{  438 ,  436 }, // 109°C
{  450 ,  430 }, // 107.5°C
{  463 ,  424 }, // 106°C
{  475 ,  417 }, // 104.25°C
{  487 ,  411 }, // 102.75°C
{  500 ,  405 }, // 101.25°C
{  513 ,  399 }, // 99.75°C
{  526 ,  393 }, // 98.25°C
{  539 ,  387 }, // 96.75°C
{  552 ,  381 }, // 95.25°C
{  565 ,  374 }, // 93.5°C
{  578 ,  368 }, // 92°C
{  591 ,  362 }, // 90.5°C
{  604 ,  356 }, // 89°C
{  617 ,  350 }, // 87.5°C
{  630 ,  344 }, // 86°C
{  643 ,  338 }, // 84.5°C
{  656 ,  331 }, // 82.75°C
{  669 ,  325 }, // 81.25°C
{  682 ,  319 }, // 79.75°C
{  695 ,  313 }, // 78.25°C
{  707 ,  307 }, // 76.75°C
{  720 ,  301 }, // 75.25°C
{  732 ,  295 }, // 73.75°C
{  744 ,  289 }, // 72.25°C
{  755 ,  282 }, // 70.5°C
{  767 ,  276 }, // 69°C
{  778 ,  270 }, // 67.5°C
{  789 ,  264 }, // 66°C
{  800 ,  258 }, // 64.5°C
{  811 ,  252 }, // 63°C
{  821 ,  246 }, // 61.5°C
{  831 ,  239 }, // 59.75°C
{  840 ,  233 }, // 58.25°C
{  850 ,  227 }, // 56.75°C
{  859 ,  221 }, // 55.25°C
{  868 ,  215 }, // 53.75°C
{  876 ,  209 }, // 52.25°C
{  884 ,  203 }, // 50.75°C
{  892 ,  196 }, // 49°C
{  900 ,  190 }, // 47.5°C
{  907 ,  184 }, // 46°C
{  914 ,  178 }, // 44.5°C
{  920 ,  172 }, // 43°C
{  927 ,  166 }, // 41.5°C
{  933 ,  160 }, // 40°C
{  938 ,  153 }, // 38.25°C
{  944 ,  147 }, // 36.75°C
{  949 ,  141 }, // 35.25°C
{  954 ,  135 }, // 33.75°C
{  958 ,  129 }, // 32.25°C
{  963 ,  123 }, // 30.75°C
{  967 ,  117 }, // 29.25°C
{  971 ,  110 }, // 27.5°C
{  975 ,  104 }, // 26°C
{  978 ,  98 }, // 24.5°C
{  981 ,  92 }, // 23°C
{  984 ,  86 }, // 21.5°C
{  987 ,  80 }, // 20°C
{  990 ,  74 }, // 18.5°C
{  993 ,  68 }, // 17°C
{  995 ,  61 }, // 15.25°C
{  997 ,  55 }, // 13.75°C
{  999 ,  49 }, // 12.25°C
{  1001 ,  43 }, // 10.75°C
{  1003 ,  37 }, // 9.25°C
{  1005 ,  31 }, // 7.75°C
{  1006 ,  25 }, // 6.25°C
{  1008 ,  18 }, // 4.5°C
{  1009 ,  12 }, // 3°C
{  1010 ,  6 }, // 1.5°C
{  1011 ,  0 }, // 0°C
}
};
