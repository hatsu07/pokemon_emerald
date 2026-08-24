	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:68 LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex
	.globl gText_Rom_205929
gText_Rom_205929: @ 0x08205929
	.string "ぼくは ゲーム デザイナー\pへー\nポケモンずかん あつめてるの?\pぜんぶ あつめるの\nたいへん だけど がんばって!\pもし ぜんぶ あつめたら おしえてよ!{EOS}"
	.if (. - gText_Rom_205929) > 0x4f
	.error "gText_Rom_205929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205929) < 0x4f
	.space 0x4f - (. - gText_Rom_205929)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:71 LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
	.globl gText_Rom_205978
gText_Rom_205978: @ 0x08205978
	.string "すごいなー!\nいやー すごいよ きみ!!\pこの ポケモンずかん\nぜんぶ あつまって いるんだね!\lそれだけ ポケモンを あいしてるんだね!\pかんどう しました!\nきみを ひょうしょう させてもらいますね!{EOS}"
	.if (. - gText_Rom_205978) > 0x67
	.error "gText_Rom_205978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205978) < 0x67
	.space 0x67 - (. - gText_Rom_205978)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:74 LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer
	.globl gText_Rom_2059DF
gText_Rom_2059DF: @ 0x082059DF
	.string "おれさま?\pプログラマーだよ! こっちの\nスロットは どんなのか たのしみだな!{EOS}"
	.if (. - gText_Rom_2059DF) > 0x29
	.error "gText_Rom_2059DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2059DF) < 0x29
	.space 0x29 - (. - gText_Rom_2059DF)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:77 LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist
	.globl gText_Rom_205A08
gText_Rom_205A08: @ 0x08205A08
	.string "おれ グラフィッカー!\nホウエンの ポケモンは おもしろいね{EOS}"
	.if (. - gText_Rom_205A08) > 0x1f
	.error "gText_Rom_205A08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A08) < 0x1f
	.space 0x1f - (. - gText_Rom_205A08)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:80 LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute
	.globl gText_Rom_205A27
gText_Rom_205A27: @ 0x08205A27
	.string "うきわガール かわいい でしょ!\nうきわガールと しょうぶ なんて……\pくー! たまらんー!\pふたごちゃん かわいい でしょ!\nふたごちゃんと 2たい2 なんて……\pくー! たまらんー!{EOS}"
	.if (. - gText_Rom_205A27) > 0x5e
	.error "gText_Rom_205A27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A27) < 0x5e
	.space 0x5e - (. - gText_Rom_205A27)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:83 LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart
	.globl gText_Rom_205A85
gText_Rom_205A85: @ 0x08205A85
	.string "なんだか しおかぜが こころを くすぐって\nきもち いいですね!{EOS}"
	.if (. - gText_Rom_205A85) > 0x21
	.error "gText_Rom_205A85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A85) < 0x21
	.space 0x21 - (. - gText_Rom_205A85)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:86 LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy
	.globl gText_Rom_205AA6
gText_Rom_205AA6: @ 0x08205AA6
	.string "いつ どこで たいせんや しょうぶを\nいどまれるか わからないからな\lゲームボーイ アドバンスは てばなせないよ!{EOS}"
	.if (. - gText_Rom_205AA6) > 0x3a
	.error "gText_Rom_205AA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205AA6) < 0x3a
	.space 0x3a - (. - gText_Rom_205AA6)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:89 LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles
	.globl gText_Rom_205AE0
gText_Rom_205AE0: @ 0x08205AE0
	.string "エニシダ『…… ……\n…… …… ……ズ\p…… …… ……!\nあ ああ {PLAYER}{KUN}\lごめんごめん ひるね してたんだ\pポケモンコンテスト ってのが\nどんな ものか みに きたんだ\lなかなか おもしろそう だけど……\pまあ わたしは やっぱり\nじゅんすいに たたかって つよい\lトレーナーが すき だけどね\pうん {PLAYER}{KUN}は\nジムに コンテストに バトルテント\lなんでも たのしんで くれよ!{EOS}"
	.if (. - gText_Rom_205AE0) > 0xc3
	.error "gText_Rom_205AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205AE0) < 0xc3
	.space 0xc3 - (. - gText_Rom_205AE0)
	.endif
	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:92 LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy
	.globl gText_Rom_205BA3
gText_Rom_205BA3: @ 0x08205BA3
	.string "エニシダ『コンテストに かつための\nせんりゃくを ねるのも\lつよい トレーナーに なるための\lほうほうの ひとつでは あるね{EOS}"
	.if (. - gText_Rom_205BA3) > 0x3f
	.error "gText_Rom_205BA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205BA3) < 0x3f
	.space 0x3f - (. - gText_Rom_205BA3)
	.endif
	@ analyzed canonical ROM range 0x08205BE2-0x08205D74
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205BE2: @ 0x08205BE2
	.byte 0x00
.globl EventScript_JP_08205BE3
EventScript_JP_08205BE3: @ 0x08205BE3
	loadword 0x00, gText_Rom_205D75
	callstd 0x03
	end
.globl EventScript_JP_08205BEC
EventScript_JP_08205BEC: @ 0x08205BEC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x0002, PetalburgCity_Ext_FacePlayer
	message gText_Rom_205DBB
	waitmessage
	multichoice 0x14, 0x08, 0x10, 0x01
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08205C1F
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08205C16
	end
EventScript_JP_08205C16: @ 0x08205C16
	loadword 0x00, gText_Rom_205E10
	callstd 0x02
	end
EventScript_JP_08205C1F: @ 0x08205C1F
	loadword 0x00, gText_Rom_205E33
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08205C3E
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08205C48
	end
EventScript_JP_08205C3E: @ 0x08205C3E
	loadword 0x00, gText_Rom_205E63
	callstd 0x03
	releaseall
	end
EventScript_JP_08205C48: @ 0x08205C48
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_205E89
	callstd 0x03
	@ event command: applymovement
	applymovement 0x0002, LilycoveCity_CoveLilyMotel_2F_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: removeobject
	removeobject 0x0002
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08205C84
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08205C99
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08205CAE
	end
EventScript_JP_08205C84: @ 0x08205C84
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_CoveLilyMotel_2F_Movement_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: warp
	warp MAP_ID_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 0xFF, 0x000B, 0x0008
	.byte 0x27, 0x02
EventScript_JP_08205C99: @ 0x08205C99
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_CoveLilyMotel_2F_Movement_WalkLeft_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: warp
	warp MAP_ID_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 0xFF, 0x000B, 0x0008
	.byte 0x27, 0x02
EventScript_JP_08205CAE: @ 0x08205CAE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, LilycoveCity_CoveLilyMotel_2F_Movement_WalkRight_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: warp
	warp MAP_ID_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 0xFF, 0x000B, 0x0008
	.byte 0x27, 0x02
LilycoveCity_CoveLilyMotel_2F_Movement_WalkUp: @ 0x08205CC3
	@ object movement sequence
	walk_up
	step_end
LilycoveCity_CoveLilyMotel_2F_Movement_WalkLeft_WalkUp: @ 0x08205CC5
	@ object movement sequence
	walk_left
	walk_up
	step_end
LilycoveCity_CoveLilyMotel_2F_Movement_WalkRight_WalkUp: @ 0x08205CC8
	@ object movement sequence
	walk_right
	walk_up
	step_end
LilycoveCity_CoveLilyMotel_2F_Movement_WalkUpX2: @ 0x08205CCB
	@ object movement sequence
	walk_up
	walk_up
	step_end
.globl EventScript_JP_08205CCE
EventScript_JP_08205CCE: @ 0x08205CCE
	loadword 0x00, gText_Rom_205EBA
	callstd 0x03
	end
.globl EventScript_JP_08205CD7
EventScript_JP_08205CD7: @ 0x08205CD7
	loadword 0x00, gText_Rom_205EDD
	callstd 0x03
	end
.globl EventScript_JP_08205CE0
EventScript_JP_08205CE0: @ 0x08205CE0
	loadword 0x00, gText_Rom_205EFB
	callstd 0x03
	end
.globl EventScript_JP_08205CE9
EventScript_JP_08205CE9: @ 0x08205CE9
	loadword 0x00, gText_Rom_205F22
	callstd 0x03
	end
.globl EventScript_JP_08205CF2
EventScript_JP_08205CF2: @ 0x08205CF2
	loadword 0x00, gText_Rom_205F45
	callstd 0x03
	end
.globl EventScript_JP_08205CFB
EventScript_JP_08205CFB: @ 0x08205CFB
	loadword 0x00, gText_Rom_205F6E
	callstd 0x03
	end
.globl EventScript_JP_08205D04
EventScript_JP_08205D04: @ 0x08205D04
	loadword 0x00, gText_Rom_205F90
	callstd 0x03
	end
.globl EventScript_JP_08205D0D
EventScript_JP_08205D0D: @ 0x08205D0D
	loadword 0x00, gText_Rom_205FB5
	callstd 0x03
	end
.globl EventScript_JP_08205D16
EventScript_JP_08205D16: @ 0x08205D16
	loadword 0x00, gText_Rom_205FE8
	callstd 0x03
	end
.globl EventScript_JP_08205D1F
EventScript_JP_08205D1F: @ 0x08205D1F
	loadword 0x00, gText_Rom_206021
	callstd 0x02
	end
.globl EventScript_JP_08205D28
EventScript_JP_08205D28: @ 0x08205D28
	loadword 0x00, gText_Rom_20604F
	callstd 0x02
	end
.globl EventScript_JP_08205D31
EventScript_JP_08205D31: @ 0x08205D31
	loadword 0x00, gText_Rom_20609D
	callstd 0x03
	end
.globl EventScript_JP_08205D3A
EventScript_JP_08205D3A: @ 0x08205D3A
	loadword 0x00, gText_Rom_2060B6
	callstd 0x03
	end
.globl EventScript_JP_08205D43
EventScript_JP_08205D43: @ 0x08205D43
	loadword 0x00, gText_Rom_2060D2
	callstd 0x02
	end
.globl EventScript_JP_08205D4C
EventScript_JP_08205D4C: @ 0x08205D4C
	loadword 0x00, gText_Rom_206113
	callstd 0x02
	end
.globl EventScript_JP_08205D55
EventScript_JP_08205D55: @ 0x08205D55
	lock
	faceplayer
	loadword 0x00, gText_Rom_20613F
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0008, PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end
.globl EventScript_JP_08205D6C
EventScript_JP_08205D6C: @ 0x08205D6C
	loadword 0x00, gText_Rom_206184
	callstd 0x02
	end
