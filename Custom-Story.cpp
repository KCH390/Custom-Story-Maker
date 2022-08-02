#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void story_1(string verb1, int year1, string pluralnoun1, string adjective1, string singularnoun1, int number2,
             string adjective2, string adjective3, string singularnoun2, string singularnoun3, string adjective4,
             string singularnoun4,string singularnoun5);
void story_2(string verb1, int year1, string pluralnoun1, string adjective1, string singularnoun1, int number2,
             string adjective2, string adjective3, string singularnoun2, string singularnoun3, string adjective4,
             string singularnoun4,string singularnoun5,string lyadverb1);
void story_3(string verb1, string pluralnoun1, string adjective1, string singularnoun1, string adjective2,
             string adjective3, string singularnoun2, string singularnoun3, string adjective4, string singularnoun4,
             string singularnoun5,string lyadverb1,string pluralnoun2);

int main() {

     char story_decision;

    cout << "Choose your custom story by entering the corresponding number: \n\n"
            "A. A Wikipedia excerpt on Charles Darwin\n"
            "B. A Wikipedia excerpt on C++\n"
            "C. A Wikipedia excerpt on Zeus" << endl;

    cin >> story_decision;

    switch (story_decision){
        case 'A':
        case 'a':{
            string singularnoun1;
            cout << "Enter a singular noun: ";
            cin >> singularnoun1;

            string singularnoun2;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun2;

            string singularnoun3;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun3;

            string singularnoun4;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun4;

            string singularnoun5;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun5;

            string verb1;
            cout << "\nEnter a past-tense verb: ";
            cin >> verb1;

            int year1;
            cout << "\nEnter a year: ";
            cin >> year1;

            string pluralnoun1;
            cout << "\nEnter a plural noun: ";
            cin >> pluralnoun1;

            string adjective1;
            cout << "\nEnter an adjective: ";
            cin >> adjective1;

            string adjective2;
            cout << "\nEnter an adjective: ";
            cin >> adjective2;

            string adjective3;
            cout << "\nEnter an adjective: ";
            cin >> adjective3;

            string adjective4;
            cout << "\nEnter an adjective: ";
            cin >> adjective4;

            int number2;
            cout << "\nEnter a whole number: ";
            cin >> number2;

            story_1(verb1, year1, pluralnoun1, adjective1, singularnoun1, number2, adjective2, adjective3,
                    singularnoun2, singularnoun3, adjective4, singularnoun4, singularnoun5);
            break;
        }
        case 'B':
        case 'b':{

            string singularnoun1;
            cout << "Enter a singular noun: ";
            cin >> singularnoun1;

            string singularnoun2;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun2;

            string singularnoun3;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun3;

            string singularnoun4;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun4;

            string singularnoun5;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun5;

            string verb1;
            cout << "\nEnter a past-tense verb: ";
            cin >> verb1;

            int year1;
            cout << "\nEnter a year: ";
            cin >> year1;

            string pluralnoun1;
            cout << "\nEnter a plural noun: ";
            cin >> pluralnoun1;

            string adjective1;
            cout << "\nEnter an adjective: ";
            cin >> adjective1;

            string adjective2;
            cout << "\nEnter an adjective: ";
            cin >> adjective2;

            string adjective3;
            cout << "\nEnter an adjective: ";
            cin >> adjective3;

            string adjective4;
            cout << "\nEnter an adjective: ";
            cin >> adjective4;

            int number2;
            cout << "\nEnter a whole number: ";
            cin >> number2;

            string lyadverb1;
            cout << "\nEnter a -ly adverb: ";
            cin >> lyadverb1;

            story_2(verb1, year1, pluralnoun1, adjective1, singularnoun1, number2, adjective2, adjective3,
                    singularnoun2, singularnoun3, adjective4, singularnoun4, singularnoun5, lyadverb1);
            break;
        }
        case 'C':
        case 'c':{

            string singularnoun1;
            cout << "Enter a singular noun: ";
            cin >> singularnoun1;

            string pluralnoun1;
            cout << "\nEnter the plural of the noun above: ";
            cin >> pluralnoun1;

            string singularnoun2;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun2;

            string singularnoun3;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun3;

            string singularnoun4;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun4;

            string singularnoun5;
            cout << "\nEnter a singular noun: ";
            cin >> singularnoun5;

            string verb1;
            cout << "\nEnter a past-tense verb: ";
            cin >> verb1;

            string pluralnoun2;
            cout << "\nEnter a plural noun: ";
            cin >> pluralnoun2;

            string adjective1;
            cout << "\nEnter an adjective: ";
            cin >> adjective1;

            string adjective2;
            cout << "\nEnter an adjective: ";
            cin >> adjective2;

            string adjective3;
            cout << "\nEnter an adjective: ";
            cin >> adjective3;

            string adjective4;
            cout << "\nEnter an adjective: ";
            cin >> adjective4;

            string lyadverb1;
            cout << "\nEnter a -ly adverb: ";
            cin >> lyadverb1;

            story_3(verb1, pluralnoun1, adjective1, singularnoun1,  adjective2, adjective3, singularnoun2,
                    singularnoun3, adjective4, singularnoun4, singularnoun5, lyadverb1, pluralnoun2);
            break;
        }
        default:{
            cout << "Sorry, that\'s not an option. Try entering a specified option." << endl;
            break;
        }

    }
    return 0;
}

void story_1(string verb1, int year1, string pluralnoun1, string adjective1, string singularnoun1, int number2,
             string adjective2, string adjective3, string singularnoun2, string singularnoun3, string adjective4,
             string singularnoun4,string singularnoun5){
    cout << "\nStory initial source: https://en.wikipedia.org/wiki/Charles_Darwin" << endl;

    cout << "Darwin -" << verb1 << "- his theory of evolution with -"<< adjective3 <<"- evidence in his -" << year1 << "- book On the \n"
    "Origin of -"<< pluralnoun1 <<"-. By the 1870s, the scientific community and a majority of the -" << adjective1 << "- \n"
    "public had accepted evolution as a -" << singularnoun1 << "-. However, many favoured competing explanations that \n"
    "gave only a minor role to -" << singularnoun2 << "-, and it was not until the emergence of the modern \n"
    "evolutionary synthesis from the 1930s to the 1950s that a broad consensus developed in which \n"
    "-"<< singularnoun2 << "- was the basic mechanism of evolution. Darwin's scientific discovery is \n"
    "the unifying theory of the life sciences, explaining the -"<< singularnoun5 <<"- of life. Darwin's early \n"
    "interest in -" << singularnoun3 << "- led him to neglect his medical education at the University of Edinburgh; \n"
    "instead, he helped to investigate marine invertebrates. Studies at the University of Cambridge \n"
    "encouraged his passion for natural science. His -" << number2 << "- year voyage on HMS Beagle established him \n"
    "as an -" << adjective2 << "- -" << singularnoun4 << "- whose observations and theories supported Charles Lyell's conception of \n"
    "-"<< adjective4 <<"- geological change, and publication of his journal of the voyage made him famous as a \n"
    "popular author." << endl;
    /*
    https://en.wikipedia.org/wiki/Charles_Darwin

    Darwin published his theory of evolution with compelling evidence in his 1859 book On the
    Origin of Species. By the 1870s, the scientific community and a majority of the educated
    public had accepted evolution as a fact. However, many favoured competing explanations that
    gave only a minor role to natural selection, and it was not until the emergence of the modern
    evolutionary synthesis from the 1930s to the 1950s that a broad consensus developed in which
    natural selection was the basic mechanism of evolution.Darwin's scientific discovery
    is the unifying theory of the life sciences, explaining the diversity of life. Darwin's early
    interest in nature led him to neglect his medical education at the University of Edinburgh;
    instead, he helped to investigate marine invertebrates. Studies at the University of Cambridge
    encouraged his passion for natural science. His five-year voyage on HMS Beagle established him
    as an eminent geologist whose observations and theories supported Charles Lyell's conception of
    gradual geological change, and publication of his journal of the voyage made him famous as a
    popular author.
     */
}

void story_2(string verb1, int year1, string pluralnoun1, string adjective1, string singularnoun1, int number2,
             string adjective2, string adjective3, string singularnoun2, string singularnoun3, string adjective4,
             string singularnoun4,string singularnoun5,string lyadverb1){
    cout << "\nStory initial source: https://en.wikipedia.org/wiki/C%2B%2B" << endl;
    cout << "C++ is a general-purpose -" << adjective1 << "- language created by Danish -" << singularnoun1 << "- Bjarne Stroustrup\n"
    "as an extension of the C -" << adjective1 << "- language, or \"C with Classes\". The language has expanded \n"
    "-"<< lyadverb1 <<"- over time, and modern C++ now has object-oriented, generic, and -" << adjective3 << "- features in \n"
    "addition to facilities for -" << adjective4 << "- memory manipulation. It is almost always implemented as a compiled \n"
    "language, and many vendors provide C++ compilers, including the -"<< singularnoun2 <<"- Foundation, LLVM, Microsoft, \n"
    "Intel, Oracle, and IBM, so it is available on many platforms. C++ was -" << verb1 << "- with an orientation toward \n"
    "-" << pluralnoun1 << "- programming and embedded, resource-constrained software and large " << pluralnoun1 << ", with performance, \n"
    "efficiency, and flexibility of use as its design highlights. C++ has also been found useful in many \n"
    "other contexts, with key strengths being software infrastructure and resource-constrained applications, \n"
    "including desktop applications, video games, servers (e.g. e-commerce, web search, or databases), and \n"
    "performance-critical applications (e.g. telephone switches or space probes). C++ is standardized by the \n"
    "International Organization for Standardization (ISO), with the " << adjective2 << " standard -" << singularnoun3 << "- ratified and \n"
    "published by ISO in December -" << year1 << "- as ISO/IEC 14882:-" << year1 << "- (informally known as C++-" << number2 <<"-). The C++ programming \n"
    "language was initially standardized in 1998 as ISO/IEC 14882:1998, which was then amended by the C++03, \n"
    "C++11, C++14, and C++17 standards. The current C++-" << number2 <<"- standard supersedes these with new features and an \n"
    "enlarged standard library. Before the initial standardization in 1998, C++ was developed by Stroustrup at \n"
    "Bell Labs since 1979 as an -" << singularnoun4 << "- of the C language; he wanted an efficient and flexible language \n"
    "similar to C that also provided high-level -" << singularnoun5 << "- for program organization. Since 2012, C++ has been on \n"
    "a three-year release schedule with C++23 as the next planned standard." << endl;
    /*
     https://en.wikipedia.org/wiki/C%2B%2B

    C++ is a general-purpose programming language created by Danish computer scientist Bjarne Stroustrup
    as an extension of the C programming language, or "C with Classes". The language has expanded
    significantly over time, and modern C++ now has object-oriented, generic, and functional features in
    addition to facilities for low-level memory manipulation. It is almost always implemented as a compiled
    language, and many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft,
    Intel, Oracle, and IBM, so it is available on many platforms. C++ was designed with an orientation toward
    systems programming and embedded, resource-constrained software and large systems, with performance,
    efficiency, and flexibility of use as its design highlights. C++ has also been found useful in many
    other contexts, with key strengths being software infrastructure and resource-constrained applications,
    including desktop applications, video games, servers (e.g. e-commerce, web search, or databases), and
    performance-critical applications (e.g. telephone switches or space probes). C++ is standardized by the
    International Organization for Standardization (ISO), with the latest standard version ratified and
    published by ISO in December 2020 as ISO/IEC 14882:2020 (informally known as C++20). The C++ programming
    language was initially standardized in 1998 as ISO/IEC 14882:1998, which was then amended by the C++03,
    C++11, C++14, and C++17 standards. The current C++20 standard supersedes these with new features and an
    enlarged standard library. Before the initial standardization in 1998, C++ was developed by Stroustrup at
    Bell Labs since 1979 as an extension of the C language; he wanted an efficient and flexible language
    similar to C that also provided high-level features for program organization. Since 2012, C++ has been on
    a three-year release schedule with C++23 as the next planned standard.
     */
}

void story_3(string verb1, string pluralnoun1, string adjective1, string singularnoun1, string adjective2,
             string adjective3, string singularnoun2, string singularnoun3, string adjective4, string singularnoun4,
             string singularnoun5,string lyadverb1,string pluralnoun2){
    cout << "\nStory initial source: https://en.wikipedia.org/wiki/Zeus" << endl;
    cout << "Zeus is the sky and thunder -" << singularnoun1 << "- in -" << adjective1 << "- Greek religion, who rules as -" << singularnoun2 << "- of the -" << pluralnoun1 << "- of Mount Olympus. \n"
            "His name is cognate with the first element of his Roman equivalent Jupiter. His mythology and powers are \n"
            "similar, though not identical, to those of Indo-European -" << pluralnoun1 << "- such as Jupiter, Perkunas, Perun, Indra, \n"
            "and Dyaus. Zeus is the child of Cronus and Rhea, the youngest of his -" << pluralnoun2 << "- to be born, though sometimes\n"
            "reckoned the eldest as the others required disgorging from Cronus's stomach. In most traditions, he is \n"
            "married to Hera, by whom he is -" << lyadverb1 << "- said to have fathered Ares, Eileithyia, Hebe, and Hephaestus. At \n"
            "the oracle of Dodona, his consort was said to be Dione, by whom the Iliad states that he fathered \n"
            "Aphrodite. According to the Theogony, Zeus' first wife was Metis, by whom he had Athena. Zeus was also \n"
            "infamous for his erotic escapades. These -" << verb1 << "- in many divine and heroic -" << singularnoun4 << "-, including Apollo, \n"
            "Artemis, Hermes, Persephone, Dionysus, Perseus, Heracles, Helen of Troy, Minos, and the Muses. He was \n"
            "respected as an allfather who was chief of the gods and assigned roles to the others: \"Even the gods who \n"
            "are not his -" << adjective4 << "- children address him as Father, and all the -" << pluralnoun1 << "- rise in his presence.\" He was equated\n"
            "with many foreign weather -" << pluralnoun1 << "-, permitting Pausanias to observe \"That Zeus is -" << singularnoun2 << "- in -" << singularnoun5 << "- is a saying \n"
            "common to all men\". Zeus\' symbols are the thunderbolt, eagle, bull, and oak. In addition to his \n"
            "Indo-European inheritance, the -" << adjective3 << "- \"cloud-gatherer\" also derives certain -" << adjective2 << "- traits from \n"
            "the cultures of the ancient Near East, such as the scepter. Zeus is frequently depicted by Greek artists \n"
            "in one of three poses: standing, striding forward with a -" << singularnoun3 << "- leveled in his raised right hand, or \n"
            "seated in majesty." << endl;
    /*
     https://en.wikipedia.org/wiki/Zeus

    Zeus is the sky and thunder god in ancient Greek religion, who rules as king of the gods of Mount Olympus.
    His name is cognate with the first element of his Roman equivalent Jupiter. His mythology and powers are
    similar, though not identical, to those of Indo-European deities such as Jupiter, Perkūnas, Perun, Indra,
    and Dyaus. Zeus is the child of Cronus and Rhea, the youngest of his siblings to be born, though sometimes
    reckoned the eldest as the others required disgorging from Cronus's stomach. In most traditions, he is
    married to Hera, by whom he is usually said to have fathered Ares, Eileithyia, Hebe, and Hephaestus. At
    the oracle of Dodona, his consort was said to be Dione, by whom the Iliad states that he fathered
    Aphrodite. According to the Theogony, Zeus' first wife was Metis, by whom he had Athena. Zeus was also
    infamous for his erotic escapades. These resulted in many divine and heroic offspring, including Apollo,
    Artemis, Hermes, Persephone, Dionysus, Perseus, Heracles, Helen of Troy, Minos, and the Muses. He was
    respected as an allfather who was chief of the gods and assigned roles to the others: "Even the gods who
    are not his natural children address him as Father, and all the gods rise in his presence." He was equated
    with many foreign weather gods, permitting Pausanias to observe "That Zeus is king in heaven is a saying
    common to all men". Zeus' symbols are the thunderbolt, eagle, bull, and oak. In addition to his
    Indo-European inheritance, the classical "cloud-gatherer" also derives certain iconographic traits from
    the cultures of the ancient Near East, such as the scepter. Zeus is frequently depicted by Greek artists
    in one of three poses: standing, striding forward with a thunderbolt leveled in his raised right hand, or
    seated in majesty.
     */
}