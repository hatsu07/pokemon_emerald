	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:150 MossdeepCity_StevensHouse_Text_YouveEarnedHMDive
	.globl MossdeepCity_StevensHouse_Text_YouveEarnedHMDive
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive: @ 0x0820C9C8
	.string "ダイゴ『{PLAYER}{KUN}……\pみてのとおり なにも ないけど\nここが ボクの いえなんだ\p……そうだ さっきは ありがとう\nこれは ボクからの おれいの きもち\lひでんマシンの ダイビングだ\pえんりょ しないで もっていきなよ{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_YouveEarnedHMDive) > 0x6e
	.error "MossdeepCity_StevensHouse_Text_YouveEarnedHMDive may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_YouveEarnedHMDive) < 0x6e
	.space 0x6e - (. - MossdeepCity_StevensHouse_Text_YouveEarnedHMDive)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:153 MossdeepCity_StevensHouse_Text_ExplainDive
	.globl MossdeepCity_StevensHouse_Text_ExplainDive
MossdeepCity_StevensHouse_Text_ExplainDive: @ 0x0820CA36
	.string "ダイゴ『なみのりを していると\nみずの いろが こい ばしょが ある\pそこで ダイビングを つかうと\nうみの そこに もぐれるから\pうかびたい ときは\nもういちど ダイビングを つかうんだ\pばしょに よっては\nうかべない ばあいも あるけど{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_ExplainDive) > 0x79
	.error "MossdeepCity_StevensHouse_Text_ExplainDive may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_ExplainDive) < 0x79
	.space 0x79 - (. - MossdeepCity_StevensHouse_Text_ExplainDive)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:156 MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis
	.globl MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis: @ 0x0820CAAF
	.string "ダイゴ『トクサネと ルネの あいだには\nかいていどうくつが あるらしい\pほら たしか…… クスノキかんちょうが\nはっけんした という あれだよ{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis) > 0x48
	.error "MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis) < 0x48
	.space 0x48 - (. - MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:159 MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum
	.globl MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum
MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum: @ 0x0820CAF7
	.string "{PLAYER}は\nモンスターボールを しらべた!\pなかには ポケモンの\nダンバルが はいっている!\pモンスターボールを もって いきますか?{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum) > 0x42
	.error "MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum) < 0x42
	.space 0x42 - (. - MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:162 MossdeepCity_StevensHouse_Text_ObtainedBeldum
	.globl MossdeepCity_StevensHouse_Text_ObtainedBeldum
MossdeepCity_StevensHouse_Text_ObtainedBeldum: @ 0x0820CB39
	.string "{PLAYER}は\nダンバルを てにいれた!{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_ObtainedBeldum) > 0x11
	.error "MossdeepCity_StevensHouse_Text_ObtainedBeldum may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_ObtainedBeldum) < 0x11
	.space 0x11 - (. - MossdeepCity_StevensHouse_Text_ObtainedBeldum)
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
	.globl MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas: @ 0x0820CB5D
	.string "{PLAYER}は モンスターボールを\nそのままに しておいた{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas) > 0x1a
	.error "MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas) < 0x1a
	.space 0x1a - (. - MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:172 MossdeepCity_StevensHouse_Text_LetterFromSteven
	.globl MossdeepCity_StevensHouse_Text_LetterFromSteven
MossdeepCity_StevensHouse_Text_LetterFromSteven: @ 0x0820CB77
	.string "てがみが ある!\p…… …… ……\n…… …… ……\p{PLAYER}{KUN}へ\pボクは おもうことが あって\nしばらく しゅぎょうを つづける\lとうぶん いえに かえらない\pそこで おねがいだ\pつくえの うえにある\nモンスターボールを うけとって ほしい\pなかに いるのは ダンバルといって\nボクの おきにいりの ポケモンだから\pよろしく たのむよ\pでは また いつか あおう!\n      ツワブキ ダイゴより{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_LetterFromSteven) > 0xc8
	.error "MossdeepCity_StevensHouse_Text_LetterFromSteven may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_LetterFromSteven) < 0xc8
	.space 0xc8 - (. - MossdeepCity_StevensHouse_Text_LetterFromSteven)
	.endif
	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:175 MossdeepCity_StevensHouse_Text_CollectionOfRareRocks
	.globl MossdeepCity_StevensHouse_Text_CollectionOfRareRocks
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks: @ 0x0820CC3F
	.string "ダイゴの あつめた\nめずらしい いしが かざってある!{EOS}"
	.if (. - MossdeepCity_StevensHouse_Text_CollectionOfRareRocks) > 0x1c
	.error "MossdeepCity_StevensHouse_Text_CollectionOfRareRocks may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_StevensHouse_Text_CollectionOfRareRocks) < 0x1c
	.space 0x1c - (. - MossdeepCity_StevensHouse_Text_CollectionOfRareRocks)
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
	loadword 0x00, MossdeepCity_House4_Text_BrotherLikesToFindBases
	callstd 0x04
	release
	end
EventScript_0820CC71: @ 0x0820CC71
EventScript_JP_0820CC71: @ 0x0820CC71
	loadword 0x00, MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle
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
	loadword 0x00, MossdeepCity_House4_Text_YouMadeSecretBaseNearX
	callstd 0x04
	release
	end
EventScript_JP_0820CC98: @ 0x0820CC98
	loadword 0x00, MossdeepCity_House4_Text_MakeSecretBase
	callstd 0x04
	release
	end
.globl EventScript_JP_0820CCA2
EventScript_JP_0820CCA2: @ 0x0820CCA2
	lock
	faceplayer
	waitse
	playmoncry 0x013B, 0x0000
	loadword 0x00, MossdeepCity_House4_Text_Skitty
	callstd 0x04
	waitmoncry
	release
	end
