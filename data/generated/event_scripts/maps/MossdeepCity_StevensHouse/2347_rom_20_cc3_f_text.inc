	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:150 MossdeepCity_StevensHouse_Text_YouveEarnedHMDive
	.globl gText_Rom_20C9C8
gText_Rom_20C9C8: @ 0x0820C9C8
	.string "ダイゴ『{PLAYER}{KUN}……\pみてのとおり なにも ないけど\nここが ボクの いえなんだ\p……そうだ さっきは ありがとう\nこれは ボクからの おれいの きもち\lひでんマシンの ダイビングだ\pえんりょ しないで もっていきなよ{EOS}"
	.if (. - gText_Rom_20C9C8) > 0x6e
	.error "gText_Rom_20C9C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C9C8) < 0x6e
	.space 0x6e - (. - gText_Rom_20C9C8)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:153 MossdeepCity_StevensHouse_Text_ExplainDive
	.globl gText_Rom_20CA36
gText_Rom_20CA36: @ 0x0820CA36
	.string "ダイゴ『なみのりを していると\nみずの いろが こい ばしょが ある\pそこで ダイビングを つかうと\nうみの そこに もぐれるから\pうかびたい ときは\nもういちど ダイビングを つかうんだ\pばしょに よっては\nうかべない ばあいも あるけど{EOS}"
	.if (. - gText_Rom_20CA36) > 0x79
	.error "gText_Rom_20CA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CA36) < 0x79
	.space 0x79 - (. - gText_Rom_20CA36)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:156 MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis
	.globl gText_Rom_20CAAF
gText_Rom_20CAAF: @ 0x0820CAAF
	.string "ダイゴ『トクサネと ルネの あいだには\nかいていどうくつが あるらしい\pほら たしか…… クスノキかんちょうが\nはっけんした という あれだよ{EOS}"
	.if (. - gText_Rom_20CAAF) > 0x48
	.error "gText_Rom_20CAAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CAAF) < 0x48
	.space 0x48 - (. - gText_Rom_20CAAF)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:159 MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum
	.globl gText_Rom_20CAF7
gText_Rom_20CAF7: @ 0x0820CAF7
	.string "{PLAYER}は\nモンスターボールを しらべた!\pなかには ポケモンの\nダンバルが はいっている!\pモンスターボールを もって いきますか?{EOS}"
	.if (. - gText_Rom_20CAF7) > 0x42
	.error "gText_Rom_20CAF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CAF7) < 0x42
	.space 0x42 - (. - gText_Rom_20CAF7)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:162 MossdeepCity_StevensHouse_Text_ObtainedBeldum
	.globl gText_Rom_20CB39
gText_Rom_20CB39: @ 0x0820CB39
	.string "{PLAYER}は\nダンバルを てにいれた!{EOS}"
	.if (. - gText_Rom_20CB39) > 0x11
	.error "gText_Rom_20CB39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB39) < 0x11
	.space 0x11 - (. - gText_Rom_20CB39)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:166 MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon
	.globl gText_Rom_20CB4A
gText_Rom_20CB4A: @ 0x0820CB4A
	.string "これいじょう ポケモンを もてない!{EOS}"
	.if (. - gText_Rom_20CB4A) > 0x13
	.error "gText_Rom_20CB4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB4A) < 0x13
	.space 0x13 - (. - gText_Rom_20CB4A)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:169 MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas
	.globl gText_Rom_20CB5D
gText_Rom_20CB5D: @ 0x0820CB5D
	.string "{PLAYER}は モンスターボールを\nそのままに しておいた{EOS}"
	.if (. - gText_Rom_20CB5D) > 0x1a
	.error "gText_Rom_20CB5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB5D) < 0x1a
	.space 0x1a - (. - gText_Rom_20CB5D)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:172 MossdeepCity_StevensHouse_Text_LetterFromSteven
	.globl gText_Rom_20CB77
gText_Rom_20CB77: @ 0x0820CB77
	.string "てがみが ある!\p…… …… ……\n…… …… ……\p{PLAYER}{KUN}へ\pボクは おもうことが あって\nしばらく しゅぎょうを つづける\lとうぶん いえに かえらない\pそこで おねがいだ\pつくえの うえにある\nモンスターボールを うけとって ほしい\pなかに いるのは ダンバルといって\nボクの おきにいりの ポケモンだから\pよろしく たのむよ\pでは また いつか あおう!\n      ツワブキ ダイゴより{EOS}"
	.if (. - gText_Rom_20CB77) > 0xc8
	.error "gText_Rom_20CB77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB77) < 0xc8
	.space 0xc8 - (. - gText_Rom_20CB77)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:175 MossdeepCity_StevensHouse_Text_CollectionOfRareRocks
	.globl gText_Rom_20CC3F
gText_Rom_20CC3F: @ 0x0820CC3F
	.string "ダイゴの あつめた\nめずらしい いしが かざってある!{EOS}"
	.if (. - gText_Rom_20CC3F) > 0x1c
	.error "gText_Rom_20CC3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CC3F) < 0x1c
	.space 0x1c - (. - gText_Rom_20CC3F)
	.endif
	@ analyzed canonical ROM range 0x0820CC5B-0x0820CCB4
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820CC5B: @ 0x0820CC5B
	.byte 0x00
.globl EventScript_JP_0820CC5C
EventScript_JP_0820CC5C: @ 0x0820CC5C
	lock
	faceplayer
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820CC71
	loadword 0x00, gText_Rom_20CCB5
	callstd 0x04
	release
	end
EventScript_0820CC71: @ 0x0820CC71
EventScript_JP_0820CC71: @ 0x0820CC71
	loadword 0x00, gText_Rom_20CCDB
	callstd 0x04
	release
	end
.globl EventScript_JP_0820CC7B
EventScript_JP_0820CC7B: @ 0x0820CC7B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	@ event command: special
	special CheckPlayerHasSecretBase
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820CC98
	@ event command: special
	special GetSecretBaseNearbyMapName
	loadword 0x00, gText_Rom_20CD10
	callstd 0x04
	release
	end
EventScript_JP_0820CC98: @ 0x0820CC98
	loadword 0x00, gText_Rom_20CD2C
	callstd 0x04
	release
	end
.globl EventScript_JP_0820CCA2
EventScript_JP_0820CCA2: @ 0x0820CCA2
	lock
	faceplayer
	waitse
	playmoncry 0x013B, 0x0000
	loadword 0x00, gText_Rom_20CD53
	callstd 0x04
	waitmoncry
	release
	end
