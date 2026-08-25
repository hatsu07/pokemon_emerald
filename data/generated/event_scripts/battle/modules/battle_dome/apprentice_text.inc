
	@ data/text/apprentice.inc:863 gText_ApprenticeWinSpeechThanks15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticeWinSpeechThanks15
gText_ApprenticeWinSpeechThanks15: @ 0x0827389D
	.string "{STR_VAR_1}\p…… …… ……\nしょうぶに かったら\p{STR_VAR_1}\p…… ほんき なのかね?\pいや ほんき なら いいんだ!\nどうも ありがとう\lこんな わたしでも いつか\lつかえる ときが くれば いいな\pでは そろそろ\nほしい じょげんも なくなってきた\l{PLAYER}{KUN}とは おわかれして\lひとりで がんばって みようかと おもう\pでは ありがとう!\nうたがって すまなかった!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks15) != 0xb5
	.error "gText_ApprenticeWinSpeechThanks15 must retain its original byte length"
	.endif
	@ src/battle_dome.c:861 battle_dome_line_861
	.globl gBattleDomePotentialText_RankIndex00
gBattleDomePotentialText_RankIndex00: @ 0x08273952
	.string "こんたいかいの ゆうしょうこうほ ナンバー1!{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex00) > 0x18
	.error "gBattleDomePotentialText_RankIndex00 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex00) < 0x18
	.space 0x18 - (. - gBattleDomePotentialText_RankIndex00)
	.endif
	@ src/battle_dome.c:862 battle_dome_line_862
	.globl gBattleDomePotentialText_RankIndex01
gBattleDomePotentialText_RankIndex01: @ 0x0827396A
	.string "けっしょうまでは かくじつと いわれる チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex01) > 0x19
	.error "gBattleDomePotentialText_RankIndex01 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex01) < 0x19
	.space 0x19 - (. - gBattleDomePotentialText_RankIndex01)
	.endif
	@ src/battle_dome.c:863 battle_dome_line_863
	.globl gBattleDomePotentialText_RankIndex02
gBattleDomePotentialText_RankIndex02: @ 0x08273983
	.string "ベスト3に はいる ちからを もった チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex02) > 0x18
	.error "gBattleDomePotentialText_RankIndex02 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex02) < 0x18
	.space 0x18 - (. - gBattleDomePotentialText_RankIndex02)
	.endif
	@ src/battle_dome.c:864 battle_dome_line_864
	.globl gBattleDomePotentialText_RankIndex03
gBattleDomePotentialText_RankIndex03: @ 0x0827399B
	.string "こんたいかい ゆうしょうこうほの 1チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex03) > 0x17
	.error "gBattleDomePotentialText_RankIndex03 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex03) < 0x17
	.space 0x17 - (. - gBattleDomePotentialText_RankIndex03)
	.endif
	@ src/battle_dome.c:865 battle_dome_line_865
	.globl gBattleDomePotentialText_RankIndex04
gBattleDomePotentialText_RankIndex04: @ 0x082739B2
	.string "トップクラスの ちからを そなえた チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex04) > 0x17
	.error "gBattleDomePotentialText_RankIndex04 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex04) < 0x17
	.space 0x17 - (. - gBattleDomePotentialText_RankIndex04)
	.endif
	@ src/battle_dome.c:866 battle_dome_line_866
	.globl gBattleDomePotentialText_RankIndex05
gBattleDomePotentialText_RankIndex05: @ 0x082739C9
	.string "こんたいかい ちゅうもくの ダークホース!{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex05) > 0x16
	.error "gBattleDomePotentialText_RankIndex05 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex05) < 0x16
	.space 0x16 - (. - gBattleDomePotentialText_RankIndex05)
	.endif
	@ src/battle_dome.c:867 battle_dome_line_867
	.globl gBattleDomePotentialText_RankIndex06
gBattleDomePotentialText_RankIndex06: @ 0x082739DF
	.string "へいきんより すこし ちからが うえの チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex06) > 0x19
	.error "gBattleDomePotentialText_RankIndex06 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex06) < 0x19
	.space 0x19 - (. - gBattleDomePotentialText_RankIndex06)
	.endif
	@ src/battle_dome.c:868 battle_dome_line_868
	.globl gBattleDomePotentialText_RankIndex07
gBattleDomePotentialText_RankIndex07: @ 0x082739F8
	.string "こんたいかいの へいきんてきな チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex07) > 0x15
	.error "gBattleDomePotentialText_RankIndex07 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex07) < 0x15
	.space 0x15 - (. - gBattleDomePotentialText_RankIndex07)
	.endif
	@ src/battle_dome.c:869 battle_dome_line_869
	.globl gBattleDomePotentialText_RankIndex08
gBattleDomePotentialText_RankIndex08: @ 0x08273A0D
	.string "へいきん レベルの ちからを もった チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex08) > 0x18
	.error "gBattleDomePotentialText_RankIndex08 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex08) < 0x18
	.space 0x18 - (. - gBattleDomePotentialText_RankIndex08)
	.endif
	@ src/battle_dome.c:870 battle_dome_line_870
	.globl gBattleDomePotentialText_RankIndex09
gBattleDomePotentialText_RankIndex09: @ 0x08273A25
	.string "へいきんより やや ちからが おちる チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex09) > 0x18
	.error "gBattleDomePotentialText_RankIndex09 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex09) < 0x18
	.space 0x18 - (. - gBattleDomePotentialText_RankIndex09)
	.endif
	@ src/battle_dome.c:871 battle_dome_line_871
	.globl gBattleDomePotentialText_RankIndex10
gBattleDomePotentialText_RankIndex10: @ 0x08273A3D
	.string "まず 1しょうが もくひょうと なる チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex10) > 0x18
	.error "gBattleDomePotentialText_RankIndex10 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex10) < 0x18
	.space 0x18 - (. - gBattleDomePotentialText_RankIndex10)
	.endif
	@ src/battle_dome.c:872 battle_dome_line_872
	.globl gBattleDomePotentialText_RankIndex11
gBattleDomePotentialText_RankIndex11: @ 0x08273A55
	.string "1しょう できれば じょうじょうの チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex11) > 0x17
	.error "gBattleDomePotentialText_RankIndex11 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex11) < 0x17
	.space 0x17 - (. - gBattleDomePotentialText_RankIndex11)
	.endif
	@ src/battle_dome.c:873 battle_dome_line_873
	.globl gBattleDomePotentialText_RankIndex12
gBattleDomePotentialText_RankIndex12: @ 0x08273A6C
	.string "ぜんたいの なかで したの レベルの チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex12) > 0x18
	.error "gBattleDomePotentialText_RankIndex12 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex12) < 0x18
	.space 0x18 - (. - gBattleDomePotentialText_RankIndex12)
	.endif
	@ src/battle_dome.c:874 battle_dome_line_874
	.globl gBattleDomePotentialText_RankIndex13
gBattleDomePotentialText_RankIndex13: @ 0x08273A84
	.string "じつりょくは かなり したの レベルの チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex13) > 0x19
	.error "gBattleDomePotentialText_RankIndex13 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex13) < 0x19
	.space 0x19 - (. - gBattleDomePotentialText_RankIndex13)
	.endif
	@ src/battle_dome.c:875 battle_dome_line_875
	.globl gBattleDomePotentialText_RankIndex14
gBattleDomePotentialText_RankIndex14: @ 0x08273A9D
	.string "ゆうしょうは かなり むずかしい チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex14) > 0x16
	.error "gBattleDomePotentialText_RankIndex14 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex14) < 0x16
	.space 0x16 - (. - gBattleDomePotentialText_RankIndex14)
	.endif
	@ src/battle_dome.c:876 battle_dome_line_876
	.globl gBattleDomePotentialText_RankIndex15
gBattleDomePotentialText_RankIndex15: @ 0x08273AB3
	.string "ゆうしょうから もっとも とおい チーム。{EOS}"
	.if (. - gBattleDomePotentialText_RankIndex15) > 0x16
	.error "gBattleDomePotentialText_RankIndex15 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_RankIndex15) < 0x16
	.space 0x16 - (. - gBattleDomePotentialText_RankIndex15)
	.endif
	@ src/battle_dome.c:877 battle_dome_line_877
	.globl gBattleDomePotentialText_Tucker
gBattleDomePotentialText_Tucker: @ 0x08273AC9
	.string "かんぜん むてきの スーパースター!!{EOS}"
	.if (. - gBattleDomePotentialText_Tucker) > 0x14
	.error "gBattleDomePotentialText_Tucker may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomePotentialText_Tucker) < 0x14
	.space 0x14 - (. - gBattleDomePotentialText_Tucker)
	.endif
	@ src/battle_dome.c:883 battle_dome_line_883
	.globl gBattleDomeOpponentStyleText_RISKY
gBattleDomeOpponentStyleText_RISKY: @ 0x08273ADD
	.string "ときには はめつ かくごで たたかいを いどむ。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_RISKY) > 0x19
	.error "gBattleDomeOpponentStyleText_RISKY may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_RISKY) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStyleText_RISKY)
	.endif
	@ src/battle_dome.c:884 battle_dome_line_884
	.globl gBattleDomeOpponentStyleText_STALL
gBattleDomeOpponentStyleText_STALL: @ 0x08273AF6
	.string "ちょうきせんでの ねばりが とても とくい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_STALL) > 0x17
	.error "gBattleDomeOpponentStyleText_STALL may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_STALL) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_STALL)
	.endif
	@ src/battle_dome.c:885 battle_dome_line_885
	.globl gBattleDomeOpponentStyleText_VARIED
gBattleDomeOpponentStyleText_VARIED: @ 0x08273B0D
	.string "あいてに おうじて たさいな わざで たたかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_VARIED) > 0x19
	.error "gBattleDomeOpponentStyleText_VARIED may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_VARIED) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStyleText_VARIED)
	.endif
	@ src/battle_dome.c:886 battle_dome_line_886
	.globl gBattleDomeOpponentStyleText_COMBO_HIGH
gBattleDomeOpponentStyleText_COMBO_HIGH: @ 0x08273B26
	.string "かちパターンを もっていて はまると つよい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_COMBO_HIGH) > 0x18
	.error "gBattleDomeOpponentStyleText_COMBO_HIGH may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_COMBO_HIGH) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_COMBO_HIGH)
	.endif
	@ src/battle_dome.c:887 battle_dome_line_887
	.globl gBattleDomeOpponentStyleText_RARE_MOVES
gBattleDomeOpponentStyleText_RARE_MOVES: @ 0x08273B3E
	.string "とても めずらしい わざを ときどき つかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_RARE_MOVES) > 0x18
	.error "gBattleDomeOpponentStyleText_RARE_MOVES may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_RARE_MOVES) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_RARE_MOVES)
	.endif
	@ src/battle_dome.c:888 battle_dome_line_888
	.globl gBattleDomeOpponentStyleText_RARE_MOVE
gBattleDomeOpponentStyleText_RARE_MOVE: @ 0x08273B56
	.string "いひょうを つく わざで たたかいを みだす。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_RARE_MOVE) > 0x18
	.error "gBattleDomeOpponentStyleText_RARE_MOVE may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_RARE_MOVE) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_RARE_MOVE)
	.endif
	@ src/battle_dome.c:889 battle_dome_line_889
	.globl gBattleDomeOpponentStyleText_HP
gBattleDomeOpponentStyleText_HP: @ 0x08273B6E
	.string "つねに たいりょくに きを くばって たたかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_HP) > 0x19
	.error "gBattleDomeOpponentStyleText_HP may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_HP) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStyleText_HP)
	.endif
	@ src/battle_dome.c:890 battle_dome_line_890
	.globl gBattleDomeOpponentStyleText_STORE_POWER
gBattleDomeOpponentStyleText_STORE_POWER: @ 0x08273B87
	.string "ちからを ためて いっきに せめるのが とくい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_STORE_POWER) > 0x19
	.error "gBattleDomeOpponentStyleText_STORE_POWER may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_STORE_POWER) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStyleText_STORE_POWER)
	.endif
	@ src/battle_dome.c:891 battle_dome_line_891
	.globl gBattleDomeOpponentStyleText_ENFEEBLE_LOW
gBattleDomeOpponentStyleText_ENFEEBLE_LOW: @ 0x08273BA0
	.string "あいての ちからを おとすのが とくい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_ENFEEBLE_LOW) > 0x15
	.error "gBattleDomeOpponentStyleText_ENFEEBLE_LOW may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_ENFEEBLE_LOW) < 0x15
	.space 0x15 - (. - gBattleDomeOpponentStyleText_ENFEEBLE_LOW)
	.endif
	@ src/battle_dome.c:892 battle_dome_line_892
	.globl gBattleDomeOpponentStyleText_LUCK
gBattleDomeOpponentStyleText_LUCK: @ 0x08273BB5
	.string "うんに まかせた たたかいかたを このむ。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_LUCK) > 0x16
	.error "gBattleDomeOpponentStyleText_LUCK may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_LUCK) < 0x16
	.space 0x16 - (. - gBattleDomeOpponentStyleText_LUCK)
	.endif
	@ src/battle_dome.c:893 battle_dome_line_893
	.globl gBattleDomeOpponentStyleText_REGAL
gBattleDomeOpponentStyleText_REGAL: @ 0x08273BCB
	.string "おうじゃの ふうかく ただよう せめを する。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_REGAL) > 0x18
	.error "gBattleDomeOpponentStyleText_REGAL may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_REGAL) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_REGAL)
	.endif
	@ src/battle_dome.c:894 battle_dome_line_894
	.globl gBattleDomeOpponentStyleText_LOW_PP
gBattleDomeOpponentStyleText_LOW_PP: @ 0x08273BE3
	.string "PPの すくない おおわざで しょうぶする。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_LOW_PP) > 0x17
	.error "gBattleDomeOpponentStyleText_LOW_PP may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_LOW_PP) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_LOW_PP)
	.endif
	@ src/battle_dome.c:895 battle_dome_line_895
	.globl gBattleDomeOpponentStyleText_STATUS_ATK
gBattleDomeOpponentStyleText_STATUS_ATK: @ 0x08273BFA
	.string "よわらせてから こうげきを するのが とくい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_STATUS_ATK) > 0x18
	.error "gBattleDomeOpponentStyleText_STATUS_ATK may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_STATUS_ATK) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_STATUS_ATK)
	.endif
	@ src/battle_dome.c:896 battle_dome_line_896
	.globl gBattleDomeOpponentStyleText_ENDURE
gBattleDomeOpponentStyleText_ENDURE: @ 0x08273C12
	.string "あらゆる こうげきに たえながら たたかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_ENDURE) > 0x17
	.error "gBattleDomeOpponentStyleText_ENDURE may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_ENDURE) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_ENDURE)
	.endif
	@ src/battle_dome.c:897 battle_dome_line_897
	.globl gBattleDomeOpponentStyleText_STATUS
gBattleDomeOpponentStyleText_STATUS: @ 0x08273C29
	.string "あいての こころを かきみだすのが とくい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_STATUS) > 0x17
	.error "gBattleDomeOpponentStyleText_STATUS may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_STATUS) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_STATUS)
	.endif
	@ src/battle_dome.c:898 battle_dome_line_898
	.globl gBattleDomeOpponentStyleText_STRAIGHTFORWARD
gBattleDomeOpponentStyleText_STRAIGHTFORWARD: @ 0x08273C40
	.string "つよくて あつかいやすい わざを つかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_STRAIGHTFORWARD) > 0x16
	.error "gBattleDomeOpponentStyleText_STRAIGHTFORWARD may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_STRAIGHTFORWARD) < 0x16
	.space 0x16 - (. - gBattleDomeOpponentStyleText_STRAIGHTFORWARD)
	.endif
	@ src/battle_dome.c:899 battle_dome_line_899
	.globl gBattleDomeOpponentStyleText_AGGRESSIVE
gBattleDomeOpponentStyleText_AGGRESSIVE: @ 0x08273C56
	.string "きょうりょくな わざで どんどん おしまくる。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_AGGRESSIVE) > 0x18
	.error "gBattleDomeOpponentStyleText_AGGRESSIVE may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_AGGRESSIVE) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_AGGRESSIVE)
	.endif
	@ src/battle_dome.c:900 battle_dome_line_900
	.globl gBattleDomeOpponentStyleText_DEF
gBattleDomeOpponentStyleText_DEF: @ 0x08273C6E
	.string "こうげきを うまく かわしながら たたかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_DEF) > 0x17
	.error "gBattleDomeOpponentStyleText_DEF may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_DEF) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_DEF)
	.endif
	@ src/battle_dome.c:901 battle_dome_line_901
	.globl gBattleDomeOpponentStyleText_ENFEEBLE_HIGH
gBattleDomeOpponentStyleText_ENFEEBLE_HIGH: @ 0x08273C85
	.string "あいてが いやがる たたかいが とくい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_ENFEEBLE_HIGH) > 0x15
	.error "gBattleDomeOpponentStyleText_ENFEEBLE_HIGH may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_ENFEEBLE_HIGH) < 0x15
	.space 0x15 - (. - gBattleDomeOpponentStyleText_ENFEEBLE_HIGH)
	.endif
	@ src/battle_dome.c:902 battle_dome_line_902
	.globl gBattleDomeOpponentStyleText_POPULAR_POWER
gBattleDomeOpponentStyleText_POPULAR_POWER: @ 0x08273C9A
	.string "にんきの ある わざを たくさん つかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_POPULAR_POWER) > 0x16
	.error "gBattleDomeOpponentStyleText_POPULAR_POWER may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_POPULAR_POWER) < 0x16
	.space 0x16 - (. - gBattleDomeOpponentStyleText_POPULAR_POWER)
	.endif
	@ src/battle_dome.c:903 battle_dome_line_903
	.globl gBattleDomeOpponentStyleText_COMBO_LOW
gBattleDomeOpponentStyleText_COMBO_LOW: @ 0x08273CB0
	.string "きょうりょくな コンボになる わざを もつ。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_COMBO_LOW) > 0x17
	.error "gBattleDomeOpponentStyleText_COMBO_LOW may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_COMBO_LOW) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_COMBO_LOW)
	.endif
	@ src/battle_dome.c:904 battle_dome_line_904
	.globl gBattleDomeOpponentStyleText_ACCURATE
gBattleDomeOpponentStyleText_ACCURATE: @ 0x08273CC7
	.string "てがたい わざで きっちりと こうげきする。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_ACCURATE) > 0x17
	.error "gBattleDomeOpponentStyleText_ACCURATE may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_ACCURATE) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_ACCURATE)
	.endif
	@ src/battle_dome.c:905 battle_dome_line_905
	.globl gBattleDomeOpponentStyleText_POWERFUL
gBattleDomeOpponentStyleText_POWERFUL: @ 0x08273CDE
	.string "はでな わざを つかって どんどん せめる。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_POWERFUL) > 0x17
	.error "gBattleDomeOpponentStyleText_POWERFUL may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_POWERFUL) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_POWERFUL)
	.endif
	@ src/battle_dome.c:906 battle_dome_line_906
	.globl gBattleDomeOpponentStyleText_ATK_OVER_DEF
gBattleDomeOpponentStyleText_ATK_OVER_DEF: @ 0x08273CF5
	.string "まもりより とにかく せめを だいじに する。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_ATK_OVER_DEF) > 0x18
	.error "gBattleDomeOpponentStyleText_ATK_OVER_DEF may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_ATK_OVER_DEF) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_ATK_OVER_DEF)
	.endif
	@ src/battle_dome.c:907 battle_dome_line_907
	.globl gBattleDomeOpponentStyleText_DEF_OVER_ATK
gBattleDomeOpponentStyleText_DEF_OVER_ATK: @ 0x08273D0D
	.string "せめるより まもりを だいじに する。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_DEF_OVER_ATK) > 0x14
	.error "gBattleDomeOpponentStyleText_DEF_OVER_ATK may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_DEF_OVER_ATK) < 0x14
	.space 0x14 - (. - gBattleDomeOpponentStyleText_DEF_OVER_ATK)
	.endif
	@ src/battle_dome.c:908 battle_dome_line_908
	.globl gBattleDomeOpponentStyleText_POPULAR_STRONG
gBattleDomeOpponentStyleText_POPULAR_STRONG: @ 0x08273D21
	.string "つよいわざで しょうぶの しかけが はやい。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_POPULAR_STRONG) > 0x17
	.error "gBattleDomeOpponentStyleText_POPULAR_STRONG may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_POPULAR_STRONG) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_POPULAR_STRONG)
	.endif
	@ src/battle_dome.c:909 battle_dome_line_909
	.globl gBattleDomeOpponentStyleText_EFFECTS
gBattleDomeOpponentStyleText_EFFECTS: @ 0x08273D38
	.string "ついかこうかが ある わざを よく つかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_EFFECTS) > 0x17
	.error "gBattleDomeOpponentStyleText_EFFECTS may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_EFFECTS) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStyleText_EFFECTS)
	.endif
	@ src/battle_dome.c:910 battle_dome_line_910
	.globl gBattleDomeOpponentStyleText_BALANCED
gBattleDomeOpponentStyleText_BALANCED: @ 0x08273D4F
	.string "バランスよく いろいろな わざで たちむかう。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_BALANCED) > 0x18
	.error "gBattleDomeOpponentStyleText_BALANCED may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_BALANCED) < 0x18
	.space 0x18 - (. - gBattleDomeOpponentStyleText_BALANCED)
	.endif
	@ src/battle_dome.c:911 battle_dome_line_911
	.globl gBattleDomeOpponentStyleText_UNUSED1
gBattleDomeOpponentStyleText_UNUSED1: @ 0x08273D67
	.string "ダミーメッセージ1です。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_UNUSED1) > 0xd
	.error "gBattleDomeOpponentStyleText_UNUSED1 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_UNUSED1) < 0xd
	.space 0xd - (. - gBattleDomeOpponentStyleText_UNUSED1)
	.endif
	@ src/battle_dome.c:912 battle_dome_line_912
	.globl gBattleDomeOpponentStyleText_UNUSED2
gBattleDomeOpponentStyleText_UNUSED2: @ 0x08273D74
	.string "ダミーメッセージ2です。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_UNUSED2) > 0xd
	.error "gBattleDomeOpponentStyleText_UNUSED2 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_UNUSED2) < 0xd
	.space 0xd - (. - gBattleDomeOpponentStyleText_UNUSED2)
	.endif
	@ src/battle_dome.c:913 battle_dome_line_913
	.globl gBattleDomeOpponentStyleText_UNUSED3
gBattleDomeOpponentStyleText_UNUSED3: @ 0x08273D81
	.string "ダミーメッセージ3です。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_UNUSED3) > 0xd
	.error "gBattleDomeOpponentStyleText_UNUSED3 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_UNUSED3) < 0xd
	.space 0xd - (. - gBattleDomeOpponentStyleText_UNUSED3)
	.endif
	@ src/battle_dome.c:914 battle_dome_line_914
	.globl gBattleDomeOpponentStyleText_UNUSED4
gBattleDomeOpponentStyleText_UNUSED4: @ 0x08273D8E
	.string "ダミーメッセージ4です。{EOS}"
	.if (. - gBattleDomeOpponentStyleText_UNUSED4) > 0xd
	.error "gBattleDomeOpponentStyleText_UNUSED4 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStyleText_UNUSED4) < 0xd
	.space 0xd - (. - gBattleDomeOpponentStyleText_UNUSED4)
	.endif
	@ src/battle_dome.c:920 battle_dome_line_920
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index00
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index00: @ 0x08273D9B
	.string "HPと こうげきに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index00) != 0x16
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index00 must retain its original byte length"
	.endif
	@ src/battle_dome.c:921 battle_dome_line_921
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index01
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index01: @ 0x08273DB1
	.string "HPと ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index01) != 0x16
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index01 must retain its original byte length"
	.endif
	@ src/battle_dome.c:922 battle_dome_line_922
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index02
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index02: @ 0x08273DC7
	.string "HPと すばやさに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index02) != 0x16
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index02 must retain its original byte length"
	.endif
	@ src/battle_dome.c:923 battle_dome_line_923
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index03
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index03: @ 0x08273DDD
	.string "HPと とくこうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index03) != 0x16
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index03 must retain its original byte length"
	.endif
	@ src/battle_dome.c:924 battle_dome_line_924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index04
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index04: @ 0x08273DF3
	.string "HPと とくぼうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index04) != 0x16
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index04 must retain its original byte length"
	.endif
	@ src/battle_dome.c:925 battle_dome_line_925
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index05
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index05: @ 0x08273E09
	.string "こうげきと ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index05) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index05 must retain its original byte length"
	.endif
	@ src/battle_dome.c:926 battle_dome_line_926
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index06
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index06: @ 0x08273E21
	.string "こうげきと すばやさに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index06) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index06 must retain its original byte length"
	.endif
	@ src/battle_dome.c:927 battle_dome_line_927
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index07
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index07: @ 0x08273E39
	.string "こうげきと とくこうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index07) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index07 must retain its original byte length"
	.endif
	@ src/battle_dome.c:928 battle_dome_line_928
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index08
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index08: @ 0x08273E51
	.string "こうげきと とくぼうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index08) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index08 must retain its original byte length"
	.endif
	@ src/battle_dome.c:929 battle_dome_line_929
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index09
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index09: @ 0x08273E69
	.string "ぼうぎょと すばやさに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index09) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index09 must retain its original byte length"
	.endif
	@ src/battle_dome.c:930 battle_dome_line_930
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index10
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index10: @ 0x08273E81
	.string "ぼうぎょと とくこうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index10) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index10 must retain its original byte length"
	.endif
	@ src/battle_dome.c:931 battle_dome_line_931
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index11
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index11: @ 0x08273E99
	.string "ぼうぎょと とくぼうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index11) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index11 must retain its original byte length"
	.endif
	@ src/battle_dome.c:932 battle_dome_line_932
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index12
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index12: @ 0x08273EB1
	.string "すばやさと とくこうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index12) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index12 must retain its original byte length"
	.endif
	@ src/battle_dome.c:933 battle_dome_line_933
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index13
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index13: @ 0x08273EC9
	.string "すばやさと とくぼうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index13) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index13 must retain its original byte length"
	.endif
	@ src/battle_dome.c:934 battle_dome_line_934
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index14
gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index14: @ 0x08273EE1
	.string "とくこうと とくぼうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index14) != 0x18
	.error "gBattleDomeOpponentStatsText_TWO_GOOD_STATS_Index14 must retain its original byte length"
	.endif
	@ src/battle_dome.c:935 battle_dome_line_935
	.globl gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index00
gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index00: @ 0x08273EF9
	.string "HPに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index00) > 0x10
	.error "gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index00 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index00) < 0x10
	.space 0x10 - (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index00)
	.endif
	@ src/battle_dome.c:936 battle_dome_line_936
	.globl gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index01
gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index01: @ 0x08273F09
	.string "こうげきに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index01) > 0x12
	.error "gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index01 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index01) < 0x12
	.space 0x12 - (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index01)
	.endif
	@ src/battle_dome.c:937 battle_dome_line_937
	.globl gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index02
gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index02: @ 0x08273F1B
	.string "ぼうぎょに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index02) > 0x12
	.error "gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index02 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index02) < 0x12
	.space 0x12 - (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index02)
	.endif
	@ src/battle_dome.c:938 battle_dome_line_938
	.globl gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index03
gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index03: @ 0x08273F2D
	.string "すばやさに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index03) > 0x12
	.error "gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index03 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index03) < 0x12
	.space 0x12 - (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index03)
	.endif
	@ src/battle_dome.c:939 battle_dome_line_939
	.globl gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index04
gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index04: @ 0x08273F3F
	.string "とくこうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index04) > 0x12
	.error "gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index04 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index04) < 0x12
	.space 0x12 - (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index04)
	.endif
	@ src/battle_dome.c:940 battle_dome_line_940
	.globl gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index05
gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index05: @ 0x08273F51
	.string "とくぼうに ちからを いれている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index05) > 0x12
	.error "gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index05 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index05) < 0x12
	.space 0x12 - (. - gBattleDomeOpponentStatsText_ONE_GOOD_STAT_Index05)
	.endif
	@ src/battle_dome.c:941 battle_dome_line_941
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index00
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index00: @ 0x08273F63
	.string "HPと こうげきに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index00) > 0x17
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index00 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index00) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index00)
	.endif
	@ src/battle_dome.c:942 battle_dome_line_942
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index01
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index01: @ 0x08273F7A
	.string "HPと ぼうぎょに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index01) > 0x17
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index01 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index01) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index01)
	.endif
	@ src/battle_dome.c:943 battle_dome_line_943
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index02
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index02: @ 0x08273F91
	.string "HPと すばやさに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index02) > 0x17
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index02 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index02) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index02)
	.endif
	@ src/battle_dome.c:944 battle_dome_line_944
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index03
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index03: @ 0x08273FA8
	.string "HPと とくこうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index03) > 0x17
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index03 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index03) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index03)
	.endif
	@ src/battle_dome.c:945 battle_dome_line_945
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index04
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index04: @ 0x08273FBF
	.string "HPと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index04) > 0x17
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index04 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index04) < 0x17
	.space 0x17 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index04)
	.endif
	@ src/battle_dome.c:946 battle_dome_line_946
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index05
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index05: @ 0x08273FD6
	.string "こうげきと ぼうぎょに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index05) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index05 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index05) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index05)
	.endif
	@ src/battle_dome.c:947 battle_dome_line_947
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index06
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index06: @ 0x08273FEF
	.string "こうげきと すばやさに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index06) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index06 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index06) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index06)
	.endif
	@ src/battle_dome.c:948 battle_dome_line_948
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index07
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index07: @ 0x08274008
	.string "こうげきと とくこうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index07) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index07 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index07) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index07)
	.endif
	@ src/battle_dome.c:949 battle_dome_line_949
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index08
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index08: @ 0x08274021
	.string "こうげきと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index08) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index08 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index08) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index08)
	.endif
	@ src/battle_dome.c:950 battle_dome_line_950
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index09
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index09: @ 0x0827403A
	.string "ぼうぎょと すばやさに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index09) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index09 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index09) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index09)
	.endif
	@ src/battle_dome.c:951 battle_dome_line_951
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index10
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index10: @ 0x08274053
	.string "ぼうぎょと とくこうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index10) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index10 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index10) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index10)
	.endif
	@ src/battle_dome.c:952 battle_dome_line_952
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index11
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index11: @ 0x0827406C
	.string "ぼうぎょと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index11) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index11 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index11) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index11)
	.endif
	@ src/battle_dome.c:953 battle_dome_line_953
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index12
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index12: @ 0x08274085
	.string "すばやさと とくこうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index12) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index12 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index12) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index12)
	.endif
	@ src/battle_dome.c:954 battle_dome_line_954
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index13
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index13: @ 0x0827409E
	.string "すばやさと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index13) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index13 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index13) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index13)
	.endif
	@ src/battle_dome.c:955 battle_dome_line_955
	.globl gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index14
gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index14: @ 0x082740B7
	.string "とくこうと とくぼうに ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index14) > 0x19
	.error "gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index14 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index14) < 0x19
	.space 0x19 - (. - gBattleDomeOpponentStatsText_TWO_BAD_STATS_Index14)
	.endif
	@ src/battle_dome.c:956 battle_dome_line_956
	.globl gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index00
gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index00: @ 0x082740D0
	.string "HPには ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index00) > 0x12
	.error "gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index00 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index00) < 0x12
	.space 0x12 - (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index00)
	.endif
	@ src/battle_dome.c:957 battle_dome_line_957
	.globl gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index01
gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index01: @ 0x082740E2
	.string "こうげきには ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index01) > 0x14
	.error "gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index01 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index01) < 0x14
	.space 0x14 - (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index01)
	.endif
	@ src/battle_dome.c:958 battle_dome_line_958
	.globl gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index02
gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index02: @ 0x082740F6
	.string "ぼうぎょには ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index02) > 0x14
	.error "gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index02 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index02) < 0x14
	.space 0x14 - (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index02)
	.endif
	@ src/battle_dome.c:959 battle_dome_line_959
	.globl gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index03
gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index03: @ 0x0827410A
	.string "すばやさには ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index03) > 0x14
	.error "gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index03 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index03) < 0x14
	.space 0x14 - (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index03)
	.endif
	@ src/battle_dome.c:960 battle_dome_line_960
	.globl gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index04
gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index04: @ 0x0827411E
	.string "とくこうには ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index04) > 0x14
	.error "gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index04 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index04) < 0x14
	.space 0x14 - (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index04)
	.endif
	@ src/battle_dome.c:961 battle_dome_line_961
	.globl gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index05
gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index05: @ 0x08274132
	.string "とくぼうには ちからを いれていない!{EOS}"
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index05) > 0x14
	.error "gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index05 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index05) < 0x14
	.space 0x14 - (. - gBattleDomeOpponentStatsText_ONE_BAD_STAT_Index05)
	.endif
	@ src/battle_dome.c:962 battle_dome_line_962
	.globl gBattleDomeOpponentStatsText_WELL_BALANCED_Index00
gBattleDomeOpponentStatsText_WELL_BALANCED_Index00: @ 0x08274146
	.string "バランスよく ポケモンを そだてている。{EOS}"
	.if (. - gBattleDomeOpponentStatsText_WELL_BALANCED_Index00) > 0x15
	.error "gBattleDomeOpponentStatsText_WELL_BALANCED_Index00 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeOpponentStatsText_WELL_BALANCED_Index00) < 0x15
	.space 0x15 - (. - gBattleDomeOpponentStatsText_WELL_BALANCED_Index00)
	.endif
	@ src/battle_dome.c:1001 battle_dome_line_1001
	.globl gBattleDomeWinText_NoWinnerYet
gBattleDomeWinText_NoWinnerYet: @ 0x0827415B
	.string "これより たいけつ!{EOS}"
	.if (. - gBattleDomeWinText_NoWinnerYet) > 0xb
	.error "gBattleDomeWinText_NoWinnerYet may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeWinText_NoWinnerYet) < 0xb
	.space 0xb - (. - gBattleDomeWinText_NoWinnerYet)
	.endif
	@ src/battle_dome.c:1002 battle_dome_line_1002
	.globl gBattleDomeWinText_WonUsingMove
gBattleDomeWinText_WonUsingMove: @ 0x08274166
	.string "{STR_VAR_2} などで {STR_VAR_1}が しょうり!{EOS}"
	.if (. - gBattleDomeWinText_WonUsingMove) > 0x11
	.error "gBattleDomeWinText_WonUsingMove may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeWinText_WonUsingMove) < 0x11
	.space 0x11 - (. - gBattleDomeWinText_WonUsingMove)
	.endif
	@ src/battle_dome.c:1003 battle_dome_line_1003
	.globl gBattleDomeWinText_ChampionUsingMove
gBattleDomeWinText_ChampionUsingMove: @ 0x08274177
	.string "{STR_VAR_2} などで {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gBattleDomeWinText_ChampionUsingMove) > 0x11
	.error "gBattleDomeWinText_ChampionUsingMove may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeWinText_ChampionUsingMove) < 0x11
	.space 0x11 - (. - gBattleDomeWinText_ChampionUsingMove)
	.endif
	@ src/battle_dome.c:1004 battle_dome_line_1004
	.globl gBattleDomeWinText_WonByDefault
gBattleDomeWinText_WonByDefault: @ 0x08274188
	.string "あいての リタイアで {STR_VAR_1}が しょうり!{EOS}"
	.if (. - gBattleDomeWinText_WonByDefault) > 0x15
	.error "gBattleDomeWinText_WonByDefault may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeWinText_WonByDefault) < 0x15
	.space 0x15 - (. - gBattleDomeWinText_WonByDefault)
	.endif
	@ src/battle_dome.c:1005 battle_dome_line_1005
	.globl gBattleDomeWinText_ChampionByDefault
gBattleDomeWinText_ChampionByDefault: @ 0x0827419D
	.string "あいての リタイアで {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gBattleDomeWinText_ChampionByDefault) > 0x15
	.error "gBattleDomeWinText_ChampionByDefault may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeWinText_ChampionByDefault) < 0x15
	.space 0x15 - (. - gBattleDomeWinText_ChampionByDefault)
	.endif
	@ src/battle_dome.c:1006 battle_dome_line_1006
	.globl gBattleDomeWinText_WonWithoutUsingMove
gBattleDomeWinText_WonWithoutUsingMove: @ 0x082741B2
	.string "わざを つかわずに {STR_VAR_1}が しょうり!{EOS}"
	.if (. - gBattleDomeWinText_WonWithoutUsingMove) > 0x14
	.error "gBattleDomeWinText_WonWithoutUsingMove may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeWinText_WonWithoutUsingMove) < 0x14
	.space 0x14 - (. - gBattleDomeWinText_WonWithoutUsingMove)
	.endif
	@ src/battle_dome.c:1007 battle_dome_line_1007
	.globl gBattleDomeWinText_ChampionWithoutUsingMove
gBattleDomeWinText_ChampionWithoutUsingMove: @ 0x082741C6
	.string "わざを つかわずに {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gBattleDomeWinText_ChampionWithoutUsingMove) > 0x14
	.error "gBattleDomeWinText_ChampionWithoutUsingMove may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeWinText_ChampionWithoutUsingMove) < 0x14
	.space 0x14 - (. - gBattleDomeWinText_ChampionWithoutUsingMove)
	.endif
	@ src/battle_dome.c:982 battle_dome_line_982
	.globl gBattleDomeMatchText_Round1Match1
gBattleDomeMatchText_Round1Match1: @ 0x082741DA
	.string " 1かいせん だい1しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match1) > 0xe
	.error "gBattleDomeMatchText_Round1Match1 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match1) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match1)
	.endif
	@ src/battle_dome.c:983 battle_dome_line_983
	.globl gBattleDomeMatchText_Round1Match2
gBattleDomeMatchText_Round1Match2: @ 0x082741E8
	.string " 1かいせん だい2しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match2) > 0xe
	.error "gBattleDomeMatchText_Round1Match2 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match2) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match2)
	.endif
	@ src/battle_dome.c:984 battle_dome_line_984
	.globl gBattleDomeMatchText_Round1Match3
gBattleDomeMatchText_Round1Match3: @ 0x082741F6
	.string " 1かいせん だい3しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match3) > 0xe
	.error "gBattleDomeMatchText_Round1Match3 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match3) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match3)
	.endif
	@ src/battle_dome.c:985 battle_dome_line_985
	.globl gBattleDomeMatchText_Round1Match4
gBattleDomeMatchText_Round1Match4: @ 0x08274204
	.string " 1かいせん だい4しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match4) > 0xe
	.error "gBattleDomeMatchText_Round1Match4 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match4) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match4)
	.endif
	@ src/battle_dome.c:986 battle_dome_line_986
	.globl gBattleDomeMatchText_Round1Match5
gBattleDomeMatchText_Round1Match5: @ 0x08274212
	.string " 1かいせん だい5しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match5) > 0xe
	.error "gBattleDomeMatchText_Round1Match5 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match5) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match5)
	.endif
	@ src/battle_dome.c:987 battle_dome_line_987
	.globl gBattleDomeMatchText_Round1Match6
gBattleDomeMatchText_Round1Match6: @ 0x08274220
	.string " 1かいせん だい6しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match6) > 0xe
	.error "gBattleDomeMatchText_Round1Match6 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match6) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match6)
	.endif
	@ src/battle_dome.c:988 battle_dome_line_988
	.globl gBattleDomeMatchText_Round1Match7
gBattleDomeMatchText_Round1Match7: @ 0x0827422E
	.string " 1かいせん だい7しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match7) > 0xe
	.error "gBattleDomeMatchText_Round1Match7 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match7) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match7)
	.endif
	@ src/battle_dome.c:989 battle_dome_line_989
	.globl gBattleDomeMatchText_Round1Match8
gBattleDomeMatchText_Round1Match8: @ 0x0827423C
	.string " 1かいせん だい8しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round1Match8) > 0xe
	.error "gBattleDomeMatchText_Round1Match8 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round1Match8) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round1Match8)
	.endif
	@ src/battle_dome.c:990 battle_dome_line_990
	.globl gBattleDomeMatchText_Round2Match1
gBattleDomeMatchText_Round2Match1: @ 0x0827424A
	.string " 2かいせん だい1しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round2Match1) > 0xe
	.error "gBattleDomeMatchText_Round2Match1 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round2Match1) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round2Match1)
	.endif
	@ src/battle_dome.c:991 battle_dome_line_991
	.globl gBattleDomeMatchText_Round2Match2
gBattleDomeMatchText_Round2Match2: @ 0x08274258
	.string " 2かいせん だい2しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round2Match2) > 0xe
	.error "gBattleDomeMatchText_Round2Match2 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round2Match2) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round2Match2)
	.endif
	@ src/battle_dome.c:992 battle_dome_line_992
	.globl gBattleDomeMatchText_Round2Match3
gBattleDomeMatchText_Round2Match3: @ 0x08274266
	.string " 2かいせん だい3しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round2Match3) > 0xe
	.error "gBattleDomeMatchText_Round2Match3 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round2Match3) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round2Match3)
	.endif
	@ src/battle_dome.c:993 battle_dome_line_993
	.globl gBattleDomeMatchText_Round2Match4
gBattleDomeMatchText_Round2Match4: @ 0x08274274
	.string " 2かいせん だい4しあい{EOS}"
	.if (. - gBattleDomeMatchText_Round2Match4) > 0xe
	.error "gBattleDomeMatchText_Round2Match4 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Round2Match4) < 0xe
	.space 0xe - (. - gBattleDomeMatchText_Round2Match4)
	.endif
	@ src/battle_dome.c:994 battle_dome_line_994
	.globl gBattleDomeMatchText_SemifinalMatch1
gBattleDomeMatchText_SemifinalMatch1: @ 0x08274282
	.string "じゅんけっしょう だい1しあい{EOS}"
	.if (. - gBattleDomeMatchText_SemifinalMatch1) > 0x10
	.error "gBattleDomeMatchText_SemifinalMatch1 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_SemifinalMatch1) < 0x10
	.space 0x10 - (. - gBattleDomeMatchText_SemifinalMatch1)
	.endif
	@ src/battle_dome.c:995 battle_dome_line_995
	.globl gBattleDomeMatchText_SemifinalMatch2
gBattleDomeMatchText_SemifinalMatch2: @ 0x08274292
	.string "じゅんけっしょう だい2しあい{EOS}"
	.if (. - gBattleDomeMatchText_SemifinalMatch2) > 0x10
	.error "gBattleDomeMatchText_SemifinalMatch2 may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_SemifinalMatch2) < 0x10
	.space 0x10 - (. - gBattleDomeMatchText_SemifinalMatch2)
	.endif
	@ src/battle_dome.c:996 battle_dome_line_996
	.globl gBattleDomeMatchText_Final
gBattleDomeMatchText_Final: @ 0x082742A2
	.string "    けっしょうせん{EOS}"
	.if (. - gBattleDomeMatchText_Final) > 0xc
	.error "gBattleDomeMatchText_Final may not grow beyond its original slot"
	.endif
	.if (. - gBattleDomeMatchText_Final) < 0xc
	.space 0xc - (. - gBattleDomeMatchText_Final)
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
