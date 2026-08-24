
	@ data/text/apprentice.inc:863 gText_ApprenticeWinSpeechThanks15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticeWinSpeechThanks15
gText_ApprenticeWinSpeechThanks15: @ 0x0827389D
	.string "{STR_VAR_1}\p…… …… ……\nしょうぶに かったら\p{STR_VAR_1}\p…… ほんき なのかね?\pいや ほんき なら いいんだ!\nどうも ありがとう\lこんな わたしでも いつか\lつかえる ときが くれば いいな\pでは そろそろ\nほしい じょげんも なくなってきた\l{PLAYER}{KUN}とは おわかれして\lひとりで がんばって みようかと おもう\pでは ありがとう!\nうたがって すまなかった!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks15) != 0xb5
	.error "gText_ApprenticeWinSpeechThanks15 must retain its original byte length"
	.endif
	@ src/battle_dome.c:861 battle_dome_line_861
	.globl gText_Rom_273952
gText_Rom_273952: @ 0x08273952
	.string "こんたいかいの ゆうしょうこうほ ナンバー1!{EOS}"
	.if (. - gText_Rom_273952) > 0x18
	.error "gText_Rom_273952 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273952) < 0x18
	.space 0x18 - (. - gText_Rom_273952)
	.endif
	@ src/battle_dome.c:862 battle_dome_line_862
	.globl gText_Rom_27396A
gText_Rom_27396A: @ 0x0827396A
	.string "けっしょうまでは かくじつと いわれる チーム。{EOS}"
	.if (. - gText_Rom_27396A) > 0x19
	.error "gText_Rom_27396A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27396A) < 0x19
	.space 0x19 - (. - gText_Rom_27396A)
	.endif
	@ src/battle_dome.c:863 battle_dome_line_863
	.globl gText_Rom_273983
gText_Rom_273983: @ 0x08273983
	.string "ベスト3に はいる ちからを もった チーム。{EOS}"
	.if (. - gText_Rom_273983) > 0x18
	.error "gText_Rom_273983 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273983) < 0x18
	.space 0x18 - (. - gText_Rom_273983)
	.endif
	@ src/battle_dome.c:864 battle_dome_line_864
	.globl gText_Rom_27399B
gText_Rom_27399B: @ 0x0827399B
	.string "こんたいかい ゆうしょうこうほの 1チーム。{EOS}"
	.if (. - gText_Rom_27399B) > 0x17
	.error "gText_Rom_27399B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27399B) < 0x17
	.space 0x17 - (. - gText_Rom_27399B)
	.endif
	@ src/battle_dome.c:865 battle_dome_line_865
	.globl gText_Rom_2739B2
gText_Rom_2739B2: @ 0x082739B2
	.string "トップクラスの ちからを そなえた チーム。{EOS}"
	.if (. - gText_Rom_2739B2) > 0x17
	.error "gText_Rom_2739B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739B2) < 0x17
	.space 0x17 - (. - gText_Rom_2739B2)
	.endif
	@ src/battle_dome.c:866 battle_dome_line_866
	.globl gText_Rom_2739C9
gText_Rom_2739C9: @ 0x082739C9
	.string "こんたいかい ちゅうもくの ダークホース!{EOS}"
	.if (. - gText_Rom_2739C9) > 0x16
	.error "gText_Rom_2739C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739C9) < 0x16
	.space 0x16 - (. - gText_Rom_2739C9)
	.endif
	@ src/battle_dome.c:867 battle_dome_line_867
	.globl gText_Rom_2739DF
gText_Rom_2739DF: @ 0x082739DF
	.string "へいきんより すこし ちからが うえの チーム。{EOS}"
	.if (. - gText_Rom_2739DF) > 0x19
	.error "gText_Rom_2739DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739DF) < 0x19
	.space 0x19 - (. - gText_Rom_2739DF)
	.endif
	@ src/battle_dome.c:868 battle_dome_line_868
	.globl gText_Rom_2739F8
gText_Rom_2739F8: @ 0x082739F8
	.string "こんたいかいの へいきんてきな チーム。{EOS}"
	.if (. - gText_Rom_2739F8) > 0x15
	.error "gText_Rom_2739F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739F8) < 0x15
	.space 0x15 - (. - gText_Rom_2739F8)
	.endif
	@ src/battle_dome.c:869 battle_dome_line_869
	.globl gText_Rom_273A0D
gText_Rom_273A0D: @ 0x08273A0D
	.string "へいきん レベルの ちからを もった チーム。{EOS}"
	.if (. - gText_Rom_273A0D) > 0x18
	.error "gText_Rom_273A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A0D) < 0x18
	.space 0x18 - (. - gText_Rom_273A0D)
	.endif
	@ src/battle_dome.c:870 battle_dome_line_870
	.globl gText_Rom_273A25
gText_Rom_273A25: @ 0x08273A25
	.string "へいきんより やや ちからが おちる チーム。{EOS}"
	.if (. - gText_Rom_273A25) > 0x18
	.error "gText_Rom_273A25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A25) < 0x18
	.space 0x18 - (. - gText_Rom_273A25)
	.endif
	@ src/battle_dome.c:871 battle_dome_line_871
	.globl gText_Rom_273A3D
gText_Rom_273A3D: @ 0x08273A3D
	.string "まず 1しょうが もくひょうと なる チーム。{EOS}"
	.if (. - gText_Rom_273A3D) > 0x18
	.error "gText_Rom_273A3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A3D) < 0x18
	.space 0x18 - (. - gText_Rom_273A3D)
	.endif
	@ src/battle_dome.c:872 battle_dome_line_872
	.globl gText_Rom_273A55
gText_Rom_273A55: @ 0x08273A55
	.string "1しょう できれば じょうじょうの チーム。{EOS}"
	.if (. - gText_Rom_273A55) > 0x17
	.error "gText_Rom_273A55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A55) < 0x17
	.space 0x17 - (. - gText_Rom_273A55)
	.endif
	@ src/battle_dome.c:873 battle_dome_line_873
	.globl gText_Rom_273A6C
gText_Rom_273A6C: @ 0x08273A6C
	.string "ぜんたいの なかで したの レベルの チーム。{EOS}"
	.if (. - gText_Rom_273A6C) > 0x18
	.error "gText_Rom_273A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A6C) < 0x18
	.space 0x18 - (. - gText_Rom_273A6C)
	.endif
	@ src/battle_dome.c:874 battle_dome_line_874
	.globl gText_Rom_273A84
gText_Rom_273A84: @ 0x08273A84
	.string "じつりょくは かなり したの レベルの チーム。{EOS}"
	.if (. - gText_Rom_273A84) > 0x19
	.error "gText_Rom_273A84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A84) < 0x19
	.space 0x19 - (. - gText_Rom_273A84)
	.endif
	@ src/battle_dome.c:875 battle_dome_line_875
	.globl gText_Rom_273A9D
gText_Rom_273A9D: @ 0x08273A9D
	.string "ゆうしょうは かなり むずかしい チーム。{EOS}"
	.if (. - gText_Rom_273A9D) > 0x16
	.error "gText_Rom_273A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A9D) < 0x16
	.space 0x16 - (. - gText_Rom_273A9D)
	.endif
	@ src/battle_dome.c:876 battle_dome_line_876
	.globl gText_Rom_273AB3
gText_Rom_273AB3: @ 0x08273AB3
	.string "ゆうしょうから もっとも とおい チーム。{EOS}"
	.if (. - gText_Rom_273AB3) > 0x16
	.error "gText_Rom_273AB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AB3) < 0x16
	.space 0x16 - (. - gText_Rom_273AB3)
	.endif
	@ src/battle_dome.c:877 battle_dome_line_877
	.globl gText_Rom_273AC9
gText_Rom_273AC9: @ 0x08273AC9
	.string "かんぜん むてきの スーパースター!!{EOS}"
	.if (. - gText_Rom_273AC9) > 0x14
	.error "gText_Rom_273AC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AC9) < 0x14
	.space 0x14 - (. - gText_Rom_273AC9)
	.endif
	@ src/battle_dome.c:883 battle_dome_line_883
	.globl gText_Rom_273ADD
gText_Rom_273ADD: @ 0x08273ADD
	.string "ときには はめつ かくごで たたかいを いどむ。{EOS}"
	.if (. - gText_Rom_273ADD) > 0x19
	.error "gText_Rom_273ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273ADD) < 0x19
	.space 0x19 - (. - gText_Rom_273ADD)
	.endif
	@ src/battle_dome.c:884 battle_dome_line_884
	.globl gText_Rom_273AF6
gText_Rom_273AF6: @ 0x08273AF6
	.string "ちょうきせんでの ねばりが とても とくい。{EOS}"
	.if (. - gText_Rom_273AF6) > 0x17
	.error "gText_Rom_273AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AF6) < 0x17
	.space 0x17 - (. - gText_Rom_273AF6)
	.endif
	@ src/battle_dome.c:885 battle_dome_line_885
	.globl gText_Rom_273B0D
gText_Rom_273B0D: @ 0x08273B0D
	.string "あいてに おうじて たさいな わざで たたかう。{EOS}"
	.if (. - gText_Rom_273B0D) > 0x19
	.error "gText_Rom_273B0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B0D) < 0x19
	.space 0x19 - (. - gText_Rom_273B0D)
	.endif
	@ src/battle_dome.c:886 battle_dome_line_886
	.globl gText_Rom_273B26
gText_Rom_273B26: @ 0x08273B26
	.string "かちパターンを もっていて はまると つよい。{EOS}"
	.if (. - gText_Rom_273B26) > 0x18
	.error "gText_Rom_273B26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B26) < 0x18
	.space 0x18 - (. - gText_Rom_273B26)
	.endif
	@ src/battle_dome.c:887 battle_dome_line_887
	.globl gText_Rom_273B3E
gText_Rom_273B3E: @ 0x08273B3E
	.string "とても めずらしい わざを ときどき つかう。{EOS}"
	.if (. - gText_Rom_273B3E) > 0x18
	.error "gText_Rom_273B3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B3E) < 0x18
	.space 0x18 - (. - gText_Rom_273B3E)
	.endif
	@ src/battle_dome.c:888 battle_dome_line_888
	.globl gText_Rom_273B56
gText_Rom_273B56: @ 0x08273B56
	.string "いひょうを つく わざで たたかいを みだす。{EOS}"
	.if (. - gText_Rom_273B56) > 0x18
	.error "gText_Rom_273B56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B56) < 0x18
	.space 0x18 - (. - gText_Rom_273B56)
	.endif
	@ src/battle_dome.c:889 battle_dome_line_889
	.globl gText_Rom_273B6E
gText_Rom_273B6E: @ 0x08273B6E
	.string "つねに たいりょくに きを くばって たたかう。{EOS}"
	.if (. - gText_Rom_273B6E) > 0x19
	.error "gText_Rom_273B6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B6E) < 0x19
	.space 0x19 - (. - gText_Rom_273B6E)
	.endif
	@ src/battle_dome.c:890 battle_dome_line_890
	.globl gText_Rom_273B87
gText_Rom_273B87: @ 0x08273B87
	.string "ちからを ためて いっきに せめるのが とくい。{EOS}"
	.if (. - gText_Rom_273B87) > 0x19
	.error "gText_Rom_273B87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B87) < 0x19
	.space 0x19 - (. - gText_Rom_273B87)
	.endif
	@ src/battle_dome.c:891 battle_dome_line_891
	.globl gText_Rom_273BA0
gText_Rom_273BA0: @ 0x08273BA0
	.string "あいての ちからを おとすのが とくい。{EOS}"
	.if (. - gText_Rom_273BA0) > 0x15
	.error "gText_Rom_273BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BA0) < 0x15
	.space 0x15 - (. - gText_Rom_273BA0)
	.endif
	@ src/battle_dome.c:892 battle_dome_line_892
	.globl gText_Rom_273BB5
gText_Rom_273BB5: @ 0x08273BB5
	.string "うんに まかせた たたかいかたを このむ。{EOS}"
	.if (. - gText_Rom_273BB5) > 0x16
	.error "gText_Rom_273BB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BB5) < 0x16
	.space 0x16 - (. - gText_Rom_273BB5)
	.endif
	@ src/battle_dome.c:893 battle_dome_line_893
	.globl gText_Rom_273BCB
gText_Rom_273BCB: @ 0x08273BCB
	.string "おうじゃの ふうかく ただよう せめを する。{EOS}"
	.if (. - gText_Rom_273BCB) > 0x18
	.error "gText_Rom_273BCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BCB) < 0x18
	.space 0x18 - (. - gText_Rom_273BCB)
	.endif
	@ src/battle_dome.c:894 battle_dome_line_894
	.globl gText_Rom_273BE3
gText_Rom_273BE3: @ 0x08273BE3
	.string "PPの すくない おおわざで しょうぶする。{EOS}"
	.if (. - gText_Rom_273BE3) > 0x17
	.error "gText_Rom_273BE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BE3) < 0x17
	.space 0x17 - (. - gText_Rom_273BE3)
	.endif
	@ src/battle_dome.c:895 battle_dome_line_895
	.globl gText_Rom_273BFA
gText_Rom_273BFA: @ 0x08273BFA
	.string "よわらせてから こうげきを するのが とくい。{EOS}"
	.if (. - gText_Rom_273BFA) > 0x18
	.error "gText_Rom_273BFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BFA) < 0x18
	.space 0x18 - (. - gText_Rom_273BFA)
	.endif
	@ src/battle_dome.c:896 battle_dome_line_896
	.globl gText_Rom_273C12
gText_Rom_273C12: @ 0x08273C12
	.string "あらゆる こうげきに たえながら たたかう。{EOS}"
	.if (. - gText_Rom_273C12) > 0x17
	.error "gText_Rom_273C12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C12) < 0x17
	.space 0x17 - (. - gText_Rom_273C12)
	.endif
	@ src/battle_dome.c:897 battle_dome_line_897
	.globl gText_Rom_273C29
gText_Rom_273C29: @ 0x08273C29
	.string "あいての こころを かきみだすのが とくい。{EOS}"
	.if (. - gText_Rom_273C29) > 0x17
	.error "gText_Rom_273C29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C29) < 0x17
	.space 0x17 - (. - gText_Rom_273C29)
	.endif
	@ src/battle_dome.c:898 battle_dome_line_898
	.globl gText_Rom_273C40
gText_Rom_273C40: @ 0x08273C40
	.string "つよくて あつかいやすい わざを つかう。{EOS}"
	.if (. - gText_Rom_273C40) > 0x16
	.error "gText_Rom_273C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C40) < 0x16
	.space 0x16 - (. - gText_Rom_273C40)
	.endif
	@ src/battle_dome.c:899 battle_dome_line_899
	.globl gText_Rom_273C56
gText_Rom_273C56: @ 0x08273C56
	.string "きょうりょくな わざで どんどん おしまくる。{EOS}"
	.if (. - gText_Rom_273C56) > 0x18
	.error "gText_Rom_273C56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C56) < 0x18
	.space 0x18 - (. - gText_Rom_273C56)
	.endif
	@ src/battle_dome.c:900 battle_dome_line_900
	.globl gText_Rom_273C6E
gText_Rom_273C6E: @ 0x08273C6E
	.string "こうげきを うまく かわしながら たたかう。{EOS}"
	.if (. - gText_Rom_273C6E) > 0x17
	.error "gText_Rom_273C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C6E) < 0x17
	.space 0x17 - (. - gText_Rom_273C6E)
	.endif
	@ src/battle_dome.c:901 battle_dome_line_901
	.globl gText_Rom_273C85
gText_Rom_273C85: @ 0x08273C85
	.string "あいてが いやがる たたかいが とくい。{EOS}"
	.if (. - gText_Rom_273C85) > 0x15
	.error "gText_Rom_273C85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C85) < 0x15
	.space 0x15 - (. - gText_Rom_273C85)
	.endif
	@ src/battle_dome.c:902 battle_dome_line_902
	.globl gText_Rom_273C9A
gText_Rom_273C9A: @ 0x08273C9A
	.string "にんきの ある わざを たくさん つかう。{EOS}"
	.if (. - gText_Rom_273C9A) > 0x16
	.error "gText_Rom_273C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C9A) < 0x16
	.space 0x16 - (. - gText_Rom_273C9A)
	.endif
	@ src/battle_dome.c:903 battle_dome_line_903
	.globl gText_Rom_273CB0
gText_Rom_273CB0: @ 0x08273CB0
	.string "きょうりょくな コンボになる わざを もつ。{EOS}"
	.if (. - gText_Rom_273CB0) > 0x17
	.error "gText_Rom_273CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CB0) < 0x17
	.space 0x17 - (. - gText_Rom_273CB0)
	.endif
	@ src/battle_dome.c:904 battle_dome_line_904
	.globl gText_Rom_273CC7
gText_Rom_273CC7: @ 0x08273CC7
	.string "てがたい わざで きっちりと こうげきする。{EOS}"
	.if (. - gText_Rom_273CC7) > 0x17
	.error "gText_Rom_273CC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CC7) < 0x17
	.space 0x17 - (. - gText_Rom_273CC7)
	.endif
	@ src/battle_dome.c:905 battle_dome_line_905
	.globl gText_Rom_273CDE
gText_Rom_273CDE: @ 0x08273CDE
	.string "はでな わざを つかって どんどん せめる。{EOS}"
	.if (. - gText_Rom_273CDE) > 0x17
	.error "gText_Rom_273CDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CDE) < 0x17
	.space 0x17 - (. - gText_Rom_273CDE)
	.endif
	@ src/battle_dome.c:906 battle_dome_line_906
	.globl gText_Rom_273CF5
gText_Rom_273CF5: @ 0x08273CF5
	.string "まもりより とにかく せめを だいじに する。{EOS}"
	.if (. - gText_Rom_273CF5) > 0x18
	.error "gText_Rom_273CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CF5) < 0x18
	.space 0x18 - (. - gText_Rom_273CF5)
	.endif
	@ src/battle_dome.c:907 battle_dome_line_907
	.globl gText_Rom_273D0D
gText_Rom_273D0D: @ 0x08273D0D
	.string "せめるより まもりを だいじに する。{EOS}"
	.if (. - gText_Rom_273D0D) > 0x14
	.error "gText_Rom_273D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D0D) < 0x14
	.space 0x14 - (. - gText_Rom_273D0D)
	.endif
	@ src/battle_dome.c:908 battle_dome_line_908
	.globl gText_Rom_273D21
gText_Rom_273D21: @ 0x08273D21
	.string "つよいわざで しょうぶの しかけが はやい。{EOS}"
	.if (. - gText_Rom_273D21) > 0x17
	.error "gText_Rom_273D21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D21) < 0x17
	.space 0x17 - (. - gText_Rom_273D21)
	.endif
	@ src/battle_dome.c:909 battle_dome_line_909
	.globl gText_Rom_273D38
gText_Rom_273D38: @ 0x08273D38
	.string "ついかこうかが ある わざを よく つかう。{EOS}"
	.if (. - gText_Rom_273D38) > 0x17
	.error "gText_Rom_273D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D38) < 0x17
	.space 0x17 - (. - gText_Rom_273D38)
	.endif
	@ src/battle_dome.c:910 battle_dome_line_910
	.globl gText_Rom_273D4F
gText_Rom_273D4F: @ 0x08273D4F
	.string "バランスよく いろいろな わざで たちむかう。{EOS}"
	.if (. - gText_Rom_273D4F) > 0x18
	.error "gText_Rom_273D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D4F) < 0x18
	.space 0x18 - (. - gText_Rom_273D4F)
	.endif
	@ src/battle_dome.c:911 battle_dome_line_911
	.globl gText_Rom_273D67
gText_Rom_273D67: @ 0x08273D67
	.string "ダミーメッセージ1です。{EOS}"
	.if (. - gText_Rom_273D67) > 0xd
	.error "gText_Rom_273D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D67) < 0xd
	.space 0xd - (. - gText_Rom_273D67)
	.endif
	@ src/battle_dome.c:912 battle_dome_line_912
	.globl gText_Rom_273D74
gText_Rom_273D74: @ 0x08273D74
	.string "ダミーメッセージ2です。{EOS}"
	.if (. - gText_Rom_273D74) > 0xd
	.error "gText_Rom_273D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D74) < 0xd
	.space 0xd - (. - gText_Rom_273D74)
	.endif
	@ src/battle_dome.c:913 battle_dome_line_913
	.globl gText_Rom_273D81
gText_Rom_273D81: @ 0x08273D81
	.string "ダミーメッセージ3です。{EOS}"
	.if (. - gText_Rom_273D81) > 0xd
	.error "gText_Rom_273D81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D81) < 0xd
	.space 0xd - (. - gText_Rom_273D81)
	.endif
	@ src/battle_dome.c:914 battle_dome_line_914
	.globl gText_Rom_273D8E
gText_Rom_273D8E: @ 0x08273D8E
	.string "ダミーメッセージ4です。{EOS}"
	.if (. - gText_Rom_273D8E) > 0xd
	.error "gText_Rom_273D8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D8E) < 0xd
	.space 0xd - (. - gText_Rom_273D8E)
	.endif
	@ src/battle_dome.c:920 battle_dome_line_920
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273D9B
gText_Rom_273D9B: @ 0x08273D9B
	.string "HPと こうげきに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273D9B) != 0x16
	.error "gText_Rom_273D9B must retain its original byte length"
	.endif
	@ src/battle_dome.c:921 battle_dome_line_921
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DB1
gText_Rom_273DB1: @ 0x08273DB1
	.string "HPと ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DB1) != 0x16
	.error "gText_Rom_273DB1 must retain its original byte length"
	.endif
	@ src/battle_dome.c:922 battle_dome_line_922
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DC7
gText_Rom_273DC7: @ 0x08273DC7
	.string "HPと すばやさに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DC7) != 0x16
	.error "gText_Rom_273DC7 must retain its original byte length"
	.endif
	@ src/battle_dome.c:923 battle_dome_line_923
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DDD
gText_Rom_273DDD: @ 0x08273DDD
	.string "HPと とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DDD) != 0x16
	.error "gText_Rom_273DDD must retain its original byte length"
	.endif
	@ src/battle_dome.c:924 battle_dome_line_924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DF3
gText_Rom_273DF3: @ 0x08273DF3
	.string "HPと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273DF3) != 0x16
	.error "gText_Rom_273DF3 must retain its original byte length"
	.endif
	@ src/battle_dome.c:925 battle_dome_line_925
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E09
gText_Rom_273E09: @ 0x08273E09
	.string "こうげきと ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E09) != 0x18
	.error "gText_Rom_273E09 must retain its original byte length"
	.endif
	@ src/battle_dome.c:926 battle_dome_line_926
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E21
gText_Rom_273E21: @ 0x08273E21
	.string "こうげきと すばやさに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E21) != 0x18
	.error "gText_Rom_273E21 must retain its original byte length"
	.endif
	@ src/battle_dome.c:927 battle_dome_line_927
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E39
gText_Rom_273E39: @ 0x08273E39
	.string "こうげきと とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E39) != 0x18
	.error "gText_Rom_273E39 must retain its original byte length"
	.endif
	@ src/battle_dome.c:928 battle_dome_line_928
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E51
gText_Rom_273E51: @ 0x08273E51
	.string "こうげきと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E51) != 0x18
	.error "gText_Rom_273E51 must retain its original byte length"
	.endif
	@ src/battle_dome.c:929 battle_dome_line_929
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E69
gText_Rom_273E69: @ 0x08273E69
	.string "ぼうぎょと すばやさに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E69) != 0x18
	.error "gText_Rom_273E69 must retain its original byte length"
	.endif
	@ src/battle_dome.c:930 battle_dome_line_930
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E81
gText_Rom_273E81: @ 0x08273E81
	.string "ぼうぎょと とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E81) != 0x18
	.error "gText_Rom_273E81 must retain its original byte length"
	.endif
	@ src/battle_dome.c:931 battle_dome_line_931
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E99
gText_Rom_273E99: @ 0x08273E99
	.string "ぼうぎょと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273E99) != 0x18
	.error "gText_Rom_273E99 must retain its original byte length"
	.endif
	@ src/battle_dome.c:932 battle_dome_line_932
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EB1
gText_Rom_273EB1: @ 0x08273EB1
	.string "すばやさと とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273EB1) != 0x18
	.error "gText_Rom_273EB1 must retain its original byte length"
	.endif
	@ src/battle_dome.c:933 battle_dome_line_933
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EC9
gText_Rom_273EC9: @ 0x08273EC9
	.string "すばやさと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273EC9) != 0x18
	.error "gText_Rom_273EC9 must retain its original byte length"
	.endif
	@ src/battle_dome.c:934 battle_dome_line_934
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EE1
gText_Rom_273EE1: @ 0x08273EE1
	.string "とくこうと とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273EE1) != 0x18
	.error "gText_Rom_273EE1 must retain its original byte length"
	.endif
	@ src/battle_dome.c:935 battle_dome_line_935
	.globl gText_Rom_273EF9
gText_Rom_273EF9: @ 0x08273EF9
	.string "HPに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273EF9) > 0x10
	.error "gText_Rom_273EF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273EF9) < 0x10
	.space 0x10 - (. - gText_Rom_273EF9)
	.endif
	@ src/battle_dome.c:936 battle_dome_line_936
	.globl gText_Rom_273F09
gText_Rom_273F09: @ 0x08273F09
	.string "こうげきに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F09) > 0x12
	.error "gText_Rom_273F09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F09) < 0x12
	.space 0x12 - (. - gText_Rom_273F09)
	.endif
	@ src/battle_dome.c:937 battle_dome_line_937
	.globl gText_Rom_273F1B
gText_Rom_273F1B: @ 0x08273F1B
	.string "ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F1B) > 0x12
	.error "gText_Rom_273F1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F1B) < 0x12
	.space 0x12 - (. - gText_Rom_273F1B)
	.endif
	@ src/battle_dome.c:938 battle_dome_line_938
	.globl gText_Rom_273F2D
gText_Rom_273F2D: @ 0x08273F2D
	.string "すばやさに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F2D) > 0x12
	.error "gText_Rom_273F2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F2D) < 0x12
	.space 0x12 - (. - gText_Rom_273F2D)
	.endif
	@ src/battle_dome.c:939 battle_dome_line_939
	.globl gText_Rom_273F3F
gText_Rom_273F3F: @ 0x08273F3F
	.string "とくこうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F3F) > 0x12
	.error "gText_Rom_273F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F3F) < 0x12
	.space 0x12 - (. - gText_Rom_273F3F)
	.endif
	@ src/battle_dome.c:940 battle_dome_line_940
	.globl gText_Rom_273F51
gText_Rom_273F51: @ 0x08273F51
	.string "とくぼうに ちからを いれている。{EOS}"
	.if (. - gText_Rom_273F51) > 0x12
	.error "gText_Rom_273F51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F51) < 0x12
	.space 0x12 - (. - gText_Rom_273F51)
	.endif
	@ src/battle_dome.c:941 battle_dome_line_941
	.globl gText_Rom_273F63
gText_Rom_273F63: @ 0x08273F63
	.string "HPと こうげきに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273F63) > 0x17
	.error "gText_Rom_273F63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F63) < 0x17
	.space 0x17 - (. - gText_Rom_273F63)
	.endif
	@ src/battle_dome.c:942 battle_dome_line_942
	.globl gText_Rom_273F7A
gText_Rom_273F7A: @ 0x08273F7A
	.string "HPと ぼうぎょに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273F7A) > 0x17
	.error "gText_Rom_273F7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F7A) < 0x17
	.space 0x17 - (. - gText_Rom_273F7A)
	.endif
	@ src/battle_dome.c:943 battle_dome_line_943
	.globl gText_Rom_273F91
gText_Rom_273F91: @ 0x08273F91
	.string "HPと すばやさに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273F91) > 0x17
	.error "gText_Rom_273F91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F91) < 0x17
	.space 0x17 - (. - gText_Rom_273F91)
	.endif
	@ src/battle_dome.c:944 battle_dome_line_944
	.globl gText_Rom_273FA8
gText_Rom_273FA8: @ 0x08273FA8
	.string "HPと とくこうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273FA8) > 0x17
	.error "gText_Rom_273FA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FA8) < 0x17
	.space 0x17 - (. - gText_Rom_273FA8)
	.endif
	@ src/battle_dome.c:945 battle_dome_line_945
	.globl gText_Rom_273FBF
gText_Rom_273FBF: @ 0x08273FBF
	.string "HPと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273FBF) > 0x17
	.error "gText_Rom_273FBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FBF) < 0x17
	.space 0x17 - (. - gText_Rom_273FBF)
	.endif
	@ src/battle_dome.c:946 battle_dome_line_946
	.globl gText_Rom_273FD6
gText_Rom_273FD6: @ 0x08273FD6
	.string "こうげきと ぼうぎょに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273FD6) > 0x19
	.error "gText_Rom_273FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FD6) < 0x19
	.space 0x19 - (. - gText_Rom_273FD6)
	.endif
	@ src/battle_dome.c:947 battle_dome_line_947
	.globl gText_Rom_273FEF
gText_Rom_273FEF: @ 0x08273FEF
	.string "こうげきと すばやさに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273FEF) > 0x19
	.error "gText_Rom_273FEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FEF) < 0x19
	.space 0x19 - (. - gText_Rom_273FEF)
	.endif
	@ src/battle_dome.c:948 battle_dome_line_948
	.globl gText_Rom_274008
gText_Rom_274008: @ 0x08274008
	.string "こうげきと とくこうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_274008) > 0x19
	.error "gText_Rom_274008 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274008) < 0x19
	.space 0x19 - (. - gText_Rom_274008)
	.endif
	@ src/battle_dome.c:949 battle_dome_line_949
	.globl gText_Rom_274021
gText_Rom_274021: @ 0x08274021
	.string "こうげきと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_274021) > 0x19
	.error "gText_Rom_274021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274021) < 0x19
	.space 0x19 - (. - gText_Rom_274021)
	.endif
	@ src/battle_dome.c:950 battle_dome_line_950
	.globl gText_Rom_27403A
gText_Rom_27403A: @ 0x0827403A
	.string "ぼうぎょと すばやさに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27403A) > 0x19
	.error "gText_Rom_27403A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27403A) < 0x19
	.space 0x19 - (. - gText_Rom_27403A)
	.endif
	@ src/battle_dome.c:951 battle_dome_line_951
	.globl gText_Rom_274053
gText_Rom_274053: @ 0x08274053
	.string "ぼうぎょと とくこうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_274053) > 0x19
	.error "gText_Rom_274053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274053) < 0x19
	.space 0x19 - (. - gText_Rom_274053)
	.endif
	@ src/battle_dome.c:952 battle_dome_line_952
	.globl gText_Rom_27406C
gText_Rom_27406C: @ 0x0827406C
	.string "ぼうぎょと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27406C) > 0x19
	.error "gText_Rom_27406C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27406C) < 0x19
	.space 0x19 - (. - gText_Rom_27406C)
	.endif
	@ src/battle_dome.c:953 battle_dome_line_953
	.globl gText_Rom_274085
gText_Rom_274085: @ 0x08274085
	.string "すばやさと とくこうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_274085) > 0x19
	.error "gText_Rom_274085 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274085) < 0x19
	.space 0x19 - (. - gText_Rom_274085)
	.endif
	@ src/battle_dome.c:954 battle_dome_line_954
	.globl gText_Rom_27409E
gText_Rom_27409E: @ 0x0827409E
	.string "すばやさと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27409E) > 0x19
	.error "gText_Rom_27409E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27409E) < 0x19
	.space 0x19 - (. - gText_Rom_27409E)
	.endif
	@ src/battle_dome.c:955 battle_dome_line_955
	.globl gText_Rom_2740B7
gText_Rom_2740B7: @ 0x082740B7
	.string "とくこうと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_2740B7) > 0x19
	.error "gText_Rom_2740B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740B7) < 0x19
	.space 0x19 - (. - gText_Rom_2740B7)
	.endif
	@ src/battle_dome.c:956 battle_dome_line_956
	.globl gText_Rom_2740D0
gText_Rom_2740D0: @ 0x082740D0
	.string "HPには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_2740D0) > 0x12
	.error "gText_Rom_2740D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740D0) < 0x12
	.space 0x12 - (. - gText_Rom_2740D0)
	.endif
	@ src/battle_dome.c:957 battle_dome_line_957
	.globl gText_Rom_2740E2
gText_Rom_2740E2: @ 0x082740E2
	.string "こうげきには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_2740E2) > 0x14
	.error "gText_Rom_2740E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740E2) < 0x14
	.space 0x14 - (. - gText_Rom_2740E2)
	.endif
	@ src/battle_dome.c:958 battle_dome_line_958
	.globl gText_Rom_2740F6
gText_Rom_2740F6: @ 0x082740F6
	.string "ぼうぎょには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_2740F6) > 0x14
	.error "gText_Rom_2740F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740F6) < 0x14
	.space 0x14 - (. - gText_Rom_2740F6)
	.endif
	@ src/battle_dome.c:959 battle_dome_line_959
	.globl gText_Rom_27410A
gText_Rom_27410A: @ 0x0827410A
	.string "すばやさには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27410A) > 0x14
	.error "gText_Rom_27410A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27410A) < 0x14
	.space 0x14 - (. - gText_Rom_27410A)
	.endif
	@ src/battle_dome.c:960 battle_dome_line_960
	.globl gText_Rom_27411E
gText_Rom_27411E: @ 0x0827411E
	.string "とくこうには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_27411E) > 0x14
	.error "gText_Rom_27411E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27411E) < 0x14
	.space 0x14 - (. - gText_Rom_27411E)
	.endif
	@ src/battle_dome.c:961 battle_dome_line_961
	.globl gText_Rom_274132
gText_Rom_274132: @ 0x08274132
	.string "とくぼうには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_274132) > 0x14
	.error "gText_Rom_274132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274132) < 0x14
	.space 0x14 - (. - gText_Rom_274132)
	.endif
	@ src/battle_dome.c:962 battle_dome_line_962
	.globl gText_Rom_274146
gText_Rom_274146: @ 0x08274146
	.string "バランスよく ポケモンを そだてている。{EOS}"
	.if (. - gText_Rom_274146) > 0x15
	.error "gText_Rom_274146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274146) < 0x15
	.space 0x15 - (. - gText_Rom_274146)
	.endif
	@ src/battle_dome.c:1001 battle_dome_line_1001
	.globl gText_Rom_27415B
gText_Rom_27415B: @ 0x0827415B
	.string "これより たいけつ!{EOS}"
	.if (. - gText_Rom_27415B) > 0xb
	.error "gText_Rom_27415B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27415B) < 0xb
	.space 0xb - (. - gText_Rom_27415B)
	.endif
	@ src/battle_dome.c:1002 battle_dome_line_1002
	.globl gText_Rom_274166
gText_Rom_274166: @ 0x08274166
	.string "{STR_VAR_2} などで {STR_VAR_1}が しょうり!{EOS}"
	.if (. - gText_Rom_274166) > 0x11
	.error "gText_Rom_274166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274166) < 0x11
	.space 0x11 - (. - gText_Rom_274166)
	.endif
	@ src/battle_dome.c:1003 battle_dome_line_1003
	.globl gText_Rom_274177
gText_Rom_274177: @ 0x08274177
	.string "{STR_VAR_2} などで {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gText_Rom_274177) > 0x11
	.error "gText_Rom_274177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274177) < 0x11
	.space 0x11 - (. - gText_Rom_274177)
	.endif
	@ src/battle_dome.c:1004 battle_dome_line_1004
	.globl gText_Rom_274188
gText_Rom_274188: @ 0x08274188
	.string "あいての リタイアで {STR_VAR_1}が しょうり!{EOS}"
	.if (. - gText_Rom_274188) > 0x15
	.error "gText_Rom_274188 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274188) < 0x15
	.space 0x15 - (. - gText_Rom_274188)
	.endif
	@ src/battle_dome.c:1005 battle_dome_line_1005
	.globl gText_Rom_27419D
gText_Rom_27419D: @ 0x0827419D
	.string "あいての リタイアで {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gText_Rom_27419D) > 0x15
	.error "gText_Rom_27419D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27419D) < 0x15
	.space 0x15 - (. - gText_Rom_27419D)
	.endif
	@ src/battle_dome.c:1006 battle_dome_line_1006
	.globl gText_Rom_2741B2
gText_Rom_2741B2: @ 0x082741B2
	.string "わざを つかわずに {STR_VAR_1}が しょうり!{EOS}"
	.if (. - gText_Rom_2741B2) > 0x14
	.error "gText_Rom_2741B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741B2) < 0x14
	.space 0x14 - (. - gText_Rom_2741B2)
	.endif
	@ src/battle_dome.c:1007 battle_dome_line_1007
	.globl gText_Rom_2741C6
gText_Rom_2741C6: @ 0x082741C6
	.string "わざを つかわずに {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gText_Rom_2741C6) > 0x14
	.error "gText_Rom_2741C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741C6) < 0x14
	.space 0x14 - (. - gText_Rom_2741C6)
	.endif
	@ src/battle_dome.c:982 battle_dome_line_982
	.globl gText_Rom_2741DA
gText_Rom_2741DA: @ 0x082741DA
	.string " 1かいせん だい1しあい{EOS}"
	.if (. - gText_Rom_2741DA) > 0xe
	.error "gText_Rom_2741DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741DA) < 0xe
	.space 0xe - (. - gText_Rom_2741DA)
	.endif
	@ src/battle_dome.c:983 battle_dome_line_983
	.globl gText_Rom_2741E8
gText_Rom_2741E8: @ 0x082741E8
	.string " 1かいせん だい2しあい{EOS}"
	.if (. - gText_Rom_2741E8) > 0xe
	.error "gText_Rom_2741E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741E8) < 0xe
	.space 0xe - (. - gText_Rom_2741E8)
	.endif
	@ src/battle_dome.c:984 battle_dome_line_984
	.globl gText_Rom_2741F6
gText_Rom_2741F6: @ 0x082741F6
	.string " 1かいせん だい3しあい{EOS}"
	.if (. - gText_Rom_2741F6) > 0xe
	.error "gText_Rom_2741F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741F6) < 0xe
	.space 0xe - (. - gText_Rom_2741F6)
	.endif
	@ src/battle_dome.c:985 battle_dome_line_985
	.globl gText_Rom_274204
gText_Rom_274204: @ 0x08274204
	.string " 1かいせん だい4しあい{EOS}"
	.if (. - gText_Rom_274204) > 0xe
	.error "gText_Rom_274204 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274204) < 0xe
	.space 0xe - (. - gText_Rom_274204)
	.endif
	@ src/battle_dome.c:986 battle_dome_line_986
	.globl gText_Rom_274212
gText_Rom_274212: @ 0x08274212
	.string " 1かいせん だい5しあい{EOS}"
	.if (. - gText_Rom_274212) > 0xe
	.error "gText_Rom_274212 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274212) < 0xe
	.space 0xe - (. - gText_Rom_274212)
	.endif
	@ src/battle_dome.c:987 battle_dome_line_987
	.globl gText_Rom_274220
gText_Rom_274220: @ 0x08274220
	.string " 1かいせん だい6しあい{EOS}"
	.if (. - gText_Rom_274220) > 0xe
	.error "gText_Rom_274220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274220) < 0xe
	.space 0xe - (. - gText_Rom_274220)
	.endif
	@ src/battle_dome.c:988 battle_dome_line_988
	.globl gText_Rom_27422E
gText_Rom_27422E: @ 0x0827422E
	.string " 1かいせん だい7しあい{EOS}"
	.if (. - gText_Rom_27422E) > 0xe
	.error "gText_Rom_27422E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27422E) < 0xe
	.space 0xe - (. - gText_Rom_27422E)
	.endif
	@ src/battle_dome.c:989 battle_dome_line_989
	.globl gText_Rom_27423C
gText_Rom_27423C: @ 0x0827423C
	.string " 1かいせん だい8しあい{EOS}"
	.if (. - gText_Rom_27423C) > 0xe
	.error "gText_Rom_27423C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27423C) < 0xe
	.space 0xe - (. - gText_Rom_27423C)
	.endif
	@ src/battle_dome.c:990 battle_dome_line_990
	.globl gText_Rom_27424A
gText_Rom_27424A: @ 0x0827424A
	.string " 2かいせん だい1しあい{EOS}"
	.if (. - gText_Rom_27424A) > 0xe
	.error "gText_Rom_27424A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27424A) < 0xe
	.space 0xe - (. - gText_Rom_27424A)
	.endif
	@ src/battle_dome.c:991 battle_dome_line_991
	.globl gText_Rom_274258
gText_Rom_274258: @ 0x08274258
	.string " 2かいせん だい2しあい{EOS}"
	.if (. - gText_Rom_274258) > 0xe
	.error "gText_Rom_274258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274258) < 0xe
	.space 0xe - (. - gText_Rom_274258)
	.endif
	@ src/battle_dome.c:992 battle_dome_line_992
	.globl gText_Rom_274266
gText_Rom_274266: @ 0x08274266
	.string " 2かいせん だい3しあい{EOS}"
	.if (. - gText_Rom_274266) > 0xe
	.error "gText_Rom_274266 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274266) < 0xe
	.space 0xe - (. - gText_Rom_274266)
	.endif
	@ src/battle_dome.c:993 battle_dome_line_993
	.globl gText_Rom_274274
gText_Rom_274274: @ 0x08274274
	.string " 2かいせん だい4しあい{EOS}"
	.if (. - gText_Rom_274274) > 0xe
	.error "gText_Rom_274274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274274) < 0xe
	.space 0xe - (. - gText_Rom_274274)
	.endif
	@ src/battle_dome.c:994 battle_dome_line_994
	.globl gText_Rom_274282
gText_Rom_274282: @ 0x08274282
	.string "じゅんけっしょう だい1しあい{EOS}"
	.if (. - gText_Rom_274282) > 0x10
	.error "gText_Rom_274282 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274282) < 0x10
	.space 0x10 - (. - gText_Rom_274282)
	.endif
	@ src/battle_dome.c:995 battle_dome_line_995
	.globl gText_Rom_274292
gText_Rom_274292: @ 0x08274292
	.string "じゅんけっしょう だい2しあい{EOS}"
	.if (. - gText_Rom_274292) > 0x10
	.error "gText_Rom_274292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274292) < 0x10
	.space 0x10 - (. - gText_Rom_274292)
	.endif
	@ src/battle_dome.c:996 battle_dome_line_996
	.globl gText_Rom_2742A2
gText_Rom_2742A2: @ 0x082742A2
	.string "    けっしょうせん{EOS}"
	.if (. - gText_Rom_2742A2) > 0xc
	.error "gText_Rom_2742A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2742A2) < 0xc
	.space 0xc - (. - gText_Rom_2742A2)
	.endif
	@ analyzed canonical ROM range 0x082742AE-0x08274704
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x03, 0xB8, 0x42, 0x27, 0x08, 0x04, 0x71, 0x43, 0x27, 0x08, 0x16, 0x04, 0x80, 0x04, 0x00, 0x25
	.byte 0xEF, 0x00, 0x16, 0x04, 0x80, 0x05, 0x00, 0x25, 0xEF, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21
	.byte 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x44, 0x43, 0x27, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0x44, 0x43, 0x27, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x53, 0x43, 0x27, 0x08
	.byte 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01, 0x35, 0x43, 0x27, 0x08, 0x21, 0x00, 0x80, 0x04, 0x00
	.byte 0x06, 0x01, 0x44, 0x43, 0x27, 0x08, 0x21, 0x00, 0x80, 0x07, 0x00, 0x06, 0x01, 0x26, 0x43, 0x27
	.byte 0x08, 0x21, 0x00, 0x80, 0x06, 0x00, 0x06, 0x01, 0x35, 0x43, 0x27, 0x08, 0x21, 0x00, 0x80, 0x08
	.byte 0x00, 0x06, 0x01, 0x62, 0x43, 0x27, 0x08, 0x02, 0x63, 0x01, 0x00, 0x02, 0x00, 0x05, 0x00, 0x63
	.byte 0x02, 0x00, 0x06, 0x00, 0x05, 0x00, 0x02, 0x63, 0x01, 0x00, 0x04, 0x00, 0x04, 0x00, 0x63, 0x02
	.byte 0x00, 0x03, 0x00, 0x04, 0x00, 0x02, 0x63, 0x01, 0x00, 0x04, 0x00, 0x04, 0x00, 0x63, 0x02, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x02
EventText_JP_08274353: @ 0x08274353
	.string "テあ　お　お　テい　　　　　いテあ　え　う　テい　え　え　いえぞ　　ロづらく　　にえィお　ゆ▶　むすィう　かあDづらくむすィか　かあDづらくむすィき　かあDづらくむすィく　かあNづらくケい　はゆにえぞあ　サ{EOS}"
	.byte 0x00, 0x02, 0x02
EventText_JP_082743BE: @ 0x082743BE
	.string "にえぞあ　サ{EOS}"
	.byte 0x00, 0x02, 0x02, 0x16, 0x04, 0x40, 0x01, 0x00, 0x5B, 0xFF, 0x00, 0x02, 0x59, 0x01, 0x00, 0x1A
	.byte 0x25, 0x02
.globl EventScript_JP_082743D7
EventScript_JP_082743D7: @ 0x082743D7
	setvar 0x8007, 0x0000
	goto EventScript_JP_082743F8
	.byte 0x02
.globl EventScript_JP_082743E2
EventScript_JP_082743E2: @ 0x082743E2
	setvar 0x8007, 0x0001
	goto EventScript_JP_082743F8
	.byte 0x02
.globl EventScript_JP_082743ED
EventScript_JP_082743ED: @ 0x082743ED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8007, 0x0002
	goto EventScript_JP_082743F8
	.byte 0x02
EventScript_JP_082743F8: @ 0x082743F8
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePikeFunction
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallBattlePikeFunction
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0000
	@ event command: special
	special CallBattlePikeFunction
	setvar 0x8004, 0x0005
	@ event command: special
	special CallBattlePikeFunction
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_082744B9
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082744B9
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082744B9
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_082744B9
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_082744B9
	compare_var_to_value 0x8000, 0x0005
	goto_if 0x01, EventScript_JP_082744D2
	compare_var_to_value 0x8000, 0x0006
	goto_if 0x01, EventScript_JP_082744B9
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_082744B9
	compare_var_to_value 0x8000, 0x0008
	goto_if 0x01, EventScript_JP_082744B9
	end
EventScript_JP_082744B9: @ 0x082744B9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePikeThreePathRoom_Movement_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	call 0x08233520
	@ event command: warpsilent
	warpsilent MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL, 0xFF, 0x0004, 0x0007
	.byte 0x27, 0x02
EventScript_JP_082744D2: @ 0x082744D2
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePikeThreePathRoom_Movement_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	call 0x08233520
	@ event command: warpsilent
	warpsilent MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_WILD_MONS, 0xFF, 0x0004, 0x0013
	.byte 0x27, 0x02
.globl EventScript_JP_082744EB
EventScript_JP_082744EB: @ 0x082744EB
	setvar 0x4003, 0x0001
	setvar 0x4002, 0x0001
	end
.globl EventScript_JP_082744F6
EventScript_JP_082744F6: @ 0x082744F6
	setvar 0x4003, 0x0000
	setvar 0x4002, 0x0000
	lockall
	loadword 0x00, BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack
	callstd 0x04
	closemessage
	end
.globl EventScript_JP_0827450B
EventScript_JP_0827450B: @ 0x0827450B
	setvar 0x4003, 0x0001
	setvar 0x4002, 0x0001
	end
.globl EventScript_JP_08274516
EventScript_JP_08274516: @ 0x08274516
	setvar 0x4003, 0x0000
	setvar 0x4002, 0x0000
	lockall
	loadword 0x00, BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack
	callstd 0x04
	closemessage
	end
.globl EventScript_JP_0827452B
EventScript_JP_0827452B: @ 0x0827452B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0019
	@ event command: special
	special CallBattlePikeFunction
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082745B1
	compare_var_to_value 0x800D, 0x0001
	call_if 0x05, EventScript_JP_082745BF
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePikeFunction
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallBattlePikeFunction
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0003
	@ event command: special
	special CallBattlePikeFunction
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082745CD
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082745E5
	waitstate
	end
EventScript_JP_082745B1: @ 0x082745B1
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0018
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePikeFunction
	return
EventScript_JP_082745BF: @ 0x082745BF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0018
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattlePikeFunction
	return
EventScript_JP_082745CD: @ 0x082745CD
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePikeThreePathRoom_Movement_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	call 0x08233520
	@ event command: warpsilent
	warpsilent MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_FINAL, 0xFF, 0x0002, 0x0007
	.byte 0x03
EventScript_JP_082745E5: @ 0x082745E5
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePikeThreePathRoom_Movement_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	call 0x08233520
	@ event command: warpsilent
	warpsilent MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM, 0xFF, 0x0006, 0x000A
	.byte 0x03
.globl EventScript_JP_082745FD
EventScript_JP_082745FD: @ 0x082745FD
	setvar 0x8004, 0x0007
	@ event command: special
	special CallBattlePikeFunction
	setvar 0x8004, 0x0019
	@ event command: special
	special CallBattlePikeFunction
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082745B1
	compare_var_to_value 0x800D, 0x0001
	call_if 0x05, EventScript_JP_082745BF
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePikeFunction
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0001
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallBattlePikeFunction
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0003
	@ event command: special
	special CallBattlePikeFunction
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082745CD
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082745E5
	waitstate
	end
.globl EventScript_JP_0827468B
EventScript_JP_0827468B: @ 0x0827468B
	setvar 0x4003, 0x0001
	setvar 0x4002, 0x0001
	end
.globl EventScript_JP_08274696
EventScript_JP_08274696: @ 0x08274696
	setvar 0x4003, 0x0000
	setvar 0x4002, 0x0000
	lockall
	loadword 0x00, BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack
	callstd 0x04
	closemessage
	end
	.globl EventScript_JP_082746AB
EventScript_JP_082746AB: @ 0x082746AB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 0xFF, 0x0005, 0x0006
	.byte 0x27, 0x02, 0x1A, 0x06, 0x80, 0x0D, 0x80, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x00
	.byte 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06, 0x01, 0xF4, 0x46, 0x27, 0x08, 0x21
	.byte 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xF4, 0x46, 0x27, 0x08, 0x04, 0xFA, 0x46, 0x27, 0x08, 0x1A
	.byte 0x0D, 0x80, 0x06, 0x80, 0x02, 0x16, 0x04, 0x80, 0x15, 0x00, 0x25, 0xE7, 0x00, 0x03
BattleFrontier_BattlePikeThreePathRoom_Movement_SetInvisible: @ 0x08274703
	@ object movement sequence
	set_invisible
	step_end
