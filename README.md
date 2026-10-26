# ISOTechClocks

**Summary:** A C++ program that shows a user-entered time in 12-hour and 24-hour formats side by side. A menu adds an hour, minute, or second, and rollover cascades correctly (23:59:59 → 00:00:00).

**What I did well:** I separated the logic into a Clock class with header and source files, chained the add functions so rollover logic isn't duplicated, and kept leading zeros with setw /setfill.

**Improvements:** Validate the starting time, handle non-numeric input so the menu can't loop forever, and flag invalid menu choices.

**Most challenging:** Making rollover cascade (23:59:59 → 00:00:00). I chained addOneSecond() → addOneMinute() → addOneHour() and tested edge cases

**Transferable skills:** Classes, encapsulation, header/source separation, input validation.

**Maintainability:** Clear names, comments on each section, and small single-purpose functions.
