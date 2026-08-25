	@ data/text/trainers.inc:3380 Route134_Text_HitoshiPostBattle
	.globl Route134_Text_HitoshiPostBattle
Route134_Text_HitoshiPostBattle: @ 0x08262170
	.string "じぶんから しょうぶを いどんでおいて\nまけるとは…… はずかしすぎる……{EOS}"
	.if (. - Route134_Text_HitoshiPostBattle) > 0x26
	.error "Route134_Text_HitoshiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HitoshiPostBattle) < 0x26
	.space 0x26 - (. - Route134_Text_HitoshiPostBattle)
	.endif
	@ data/text/trainers.inc:3383 Route134_Text_AaronIntro (+1 aliases)
	.globl Route134_Text_AaronIntro
Route134_Text_AaronIntro: @ 0x08262196
	.string "このあたりの はげしい しおの ながれ!\nそれもまた おれたちを きたえてくれる!{EOS}"
	.if (. - Route134_Text_AaronIntro) > 0x2a
	.error "Route134_Text_AaronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AaronIntro) < 0x2a
	.space 0x2a - (. - Route134_Text_AaronIntro)
	.endif
	@ data/text/trainers.inc:3386 Route134_Text_AaronDefeat (+1 aliases)
	.globl Route134_Text_AaronDefeat
Route134_Text_AaronDefeat: @ 0x082621C0
	.string "すなおに まけを みとめよう{EOS}"
	.if (. - Route134_Text_AaronDefeat) > 0xf
	.error "Route134_Text_AaronDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AaronDefeat) < 0xf
	.space 0xf - (. - Route134_Text_AaronDefeat)
	.endif
	@ data/text/trainers.inc:3389 Route134_Text_AaronPostBattle
	.globl Route134_Text_AaronPostBattle
Route134_Text_AaronPostBattle: @ 0x082621CF
	.string "りゅうせいのたきで\nしゅぎょう しなおすと しよう!\pよければ きみも いってみたまえ\nきっと いまより つよくなる!{EOS}"
	.if (. - Route134_Text_AaronPostBattle) > 0x3c
	.error "Route134_Text_AaronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AaronPostBattle) < 0x3c
	.space 0x3c - (. - Route134_Text_AaronPostBattle)
	.endif
	@ data/text/trainers.inc:3392 Route134_Text_KelvinIntro (+1 aliases)
	.globl Route134_Text_KelvinIntro
Route134_Text_KelvinIntro: @ 0x0826220B
	.string "ふ ふねが\nながされて しまったんです{EOS}"
	.if (. - Route134_Text_KelvinIntro) > 0x14
	.error "Route134_Text_KelvinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_KelvinIntro) < 0x14
	.space 0x14 - (. - Route134_Text_KelvinIntro)
	.endif
	@ data/text/trainers.inc:3395 Route134_Text_KelvinDefeat (+1 aliases)
	.globl Route134_Text_KelvinDefeat
Route134_Text_KelvinDefeat: @ 0x0826221F
	.string "あわわわわ\nやめてください やめてくださいよ!{EOS}"
	.if (. - Route134_Text_KelvinDefeat) > 0x18
	.error "Route134_Text_KelvinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_KelvinDefeat) < 0x18
	.space 0x18 - (. - Route134_Text_KelvinDefeat)
	.endif
	@ data/text/trainers.inc:3398 Route134_Text_KelvinPostBattle
	.globl Route134_Text_KelvinPostBattle
Route134_Text_KelvinPostBattle: @ 0x08262237
	.string "このうえ なみのり まで できなかったら\nかえれないじゃ ないですか!\p……まあ ひんしでも なみのり できますけど\nきぶんてきに よろしくなくて{EOS}"
	.if (. - Route134_Text_KelvinPostBattle) > 0x4a
	.error "Route134_Text_KelvinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_KelvinPostBattle) < 0x4a
	.space 0x4a - (. - Route134_Text_KelvinPostBattle)
	.endif
	@ data/text/trainers.inc:3401 Route134_Text_MarleyIntro (+1 aliases)
	.globl Route134_Text_MarleyIntro
Route134_Text_MarleyIntro: @ 0x08262281
	.string "すばやい こうげきを かわせますこと?{EOS}"
	.if (. - Route134_Text_MarleyIntro) > 0x14
	.error "Route134_Text_MarleyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_MarleyIntro) < 0x14
	.space 0x14 - (. - Route134_Text_MarleyIntro)
	.endif
	@ data/text/trainers.inc:3404 Route134_Text_MarleyDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route134_Text_MarleyDefeat
Route134_Text_MarleyDefeat: @ 0x08262295
	.string "そんな てが あるなんて……!\nかんぱい ですわ{EOS}"
	.if (. - Route134_Text_MarleyDefeat) != 0x19
	.error "Route134_Text_MarleyDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3407 Route134_Text_MarleyPostBattle
	.globl Route134_Text_MarleyPostBattle
Route134_Text_MarleyPostBattle: @ 0x082622AE
	.string "すばやさへの こだわりは すてきれないの\nもっと がんばって みますわ!{EOS}"
	.if (. - Route134_Text_MarleyPostBattle) > 0x25
	.error "Route134_Text_MarleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_MarleyPostBattle) < 0x25
	.space 0x25 - (. - Route134_Text_MarleyPostBattle)
	.endif
	@ data/text/trainers.inc:3410 Route134_Text_ReynaIntro (+1 aliases)
	.globl Route134_Text_ReynaIntro
Route134_Text_ReynaIntro: @ 0x082622D3
	.string "あたいの ポケモンは\nちょっとや そっとじゃ たおせないよ!{EOS}"
	.if (. - Route134_Text_ReynaIntro) > 0x1f
	.error "Route134_Text_ReynaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_ReynaIntro) < 0x1f
	.space 0x1f - (. - Route134_Text_ReynaIntro)
	.endif
	@ data/text/trainers.inc:3413 Route134_Text_ReynaDefeat (+1 aliases)
	.globl Route134_Text_ReynaDefeat
Route134_Text_ReynaDefeat: @ 0x082622F2
	.string "うっそだろ!\nあたいが まけるなんて!{EOS}"
	.if (. - Route134_Text_ReynaDefeat) > 0x14
	.error "Route134_Text_ReynaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_ReynaDefeat) < 0x14
	.space 0x14 - (. - Route134_Text_ReynaDefeat)
	.endif
	@ data/text/trainers.inc:3416 Route134_Text_ReynaPostBattle
	.globl Route134_Text_ReynaPostBattle
Route134_Text_ReynaPostBattle: @ 0x08262306
	.string "ははっ あんたにゃ まけたよ!\pそこらへんの トレーナーでも たおして\nいちから しゅぎょう しなおすよ!{EOS}"
	.if (. - Route134_Text_ReynaPostBattle) > 0x36
	.error "Route134_Text_ReynaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_ReynaPostBattle) < 0x36
	.space 0x36 - (. - Route134_Text_ReynaPostBattle)
	.endif
	@ data/text/trainers.inc:3419 Route134_Text_HudsonIntro (+1 aliases)
	.globl Route134_Text_HudsonIntro
Route134_Text_HudsonIntro: @ 0x0826233C
	.string "なあ このへんで\nもうひとり ふなのりを みなかった?{EOS}"
	.if (. - Route134_Text_HudsonIntro) > 0x1c
	.error "Route134_Text_HudsonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HudsonIntro) < 0x1c
	.space 0x1c - (. - Route134_Text_HudsonIntro)
	.endif
	@ data/text/trainers.inc:3422 Route134_Text_HudsonDefeat (+1 aliases)
	.globl Route134_Text_HudsonDefeat
Route134_Text_HudsonDefeat: @ 0x08262358
	.string "おー すごいな{EOS}"
	.if (. - Route134_Text_HudsonDefeat) > 0x8
	.error "Route134_Text_HudsonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HudsonDefeat) < 0x8
	.space 0x8 - (. - Route134_Text_HudsonDefeat)
	.endif
	@ data/text/trainers.inc:3425 Route134_Text_HudsonPostBattle
	.globl Route134_Text_HudsonPostBattle
Route134_Text_HudsonPostBattle: @ 0x08262360
	.string "おれたちの ふねが ながされちゃってさ!\pあいぼうが きの よわい やつだから\nしんぱい してるんだ{EOS}"
	.if (. - Route134_Text_HudsonPostBattle) > 0x33
	.error "Route134_Text_HudsonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HudsonPostBattle) < 0x33
	.space 0x33 - (. - Route134_Text_HudsonPostBattle)
	.endif
	@ analyzed canonical ROM range 0x08262393-0x0826239B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08262393: @ 0x08262393
.globl EventScript_JP_08262393
EventScript_JP_08262393: @ 0x08262393
	loadword 0x00, FieldScriptText_26239C
	callstd 0x03
	end
	@ field-script:0x262395 FieldScriptText_26239C
	.globl FieldScriptText_26239C
FieldScriptText_26239C: @ 0x0826239C
	.string "スプレーのこうかが　きれた{EOS}"
	.if (. - FieldScriptText_26239C) > 0xe
	.error "FieldScriptText_26239C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26239C) < 0xe
	.space 0xe - (. - FieldScriptText_26239C)
	.endif
	.globl EventScript_JP_082623AA
	@ analyzed canonical ROM range 0x082623AA-0x082623CC
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_082623AA: @ 0x082623AA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40A4, 0x0001
	@ event command: special
	special ExitSafariMode
	@ event command: setwarp
	setwarp MAP_ID_ROUTE121_SAFARI_ZONE_ENTRANCE, 0xFF, 0x0002, 0x0005
	.byte 0x02
EventScript_JP_082623BB: @ 0x082623BB
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x40A4, 0x0001
	@ event command: special
	special ExitSafariMode
	@ event command: warp
	warp MAP_ID_ROUTE121_SAFARI_ZONE_ENTRANCE, 0xFF, 0x0002, 0x0005
	.byte 0x27, 0x02
	@ analyzed canonical ROM range 0x082623CD-0x082623E7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623CD: @ 0x082623CD
.globl EventScript_JP_082623CD
EventScript_JP_082623CD: @ 0x082623CD
	lockall
	loadword 0x00, FieldScriptText_262452
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082623E3
	releaseall
	end
EventScript_082623E3: @ 0x082623E3
EventScript_JP_082623E3: @ 0x082623E3
	goto EventScript_JP_082623BB
	@ analyzed canonical ROM range 0x082623E8-0x082623F8
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623E8: @ 0x082623E8
.globl EventScript_JP_082623E8
EventScript_JP_082623E8: @ 0x082623E8
	lockall
	playse 0x0049
	message FieldScriptText_26246D
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_JP_082623BB
	@ analyzed canonical ROM range 0x082623F9-0x08262409
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082623F9: @ 0x082623F9
.globl EventScript_JP_082623F9
EventScript_JP_082623F9: @ 0x082623F9
	lockall
	playse 0x0049
	message FieldScriptText_262491
	waitmessage
	waitbuttonpress
	releaseall
	goto EventScript_JP_082623BB
	.globl EventScript_JP_0826240A
	@ analyzed canonical ROM range 0x0826240A-0x08262451
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_JP_0826240A: @ 0x0826240A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: special
	special GetPokeblockFeederInFront
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08262449
	loadword 0x00, FieldScriptText_2624B7
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0826242E
	releaseall
	end
EventScript_JP_0826242E: @ 0x0826242E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	fadescreen 0x01
	@ event command: special
	special OpenPokeblockCaseOnFeeder
	waitstate
	compare_var_to_value 0x800D, 0xFFFF
	goto_if 0x05, EventScript_JP_08262440
	end
EventScript_JP_08262440: @ 0x08262440
	message FieldScriptText_2624DC
	waitmessage
	waitbuttonpress
	releaseall
	end
EventScript_JP_08262449: @ 0x08262449
	message FieldScriptText_2624CD
	waitmessage
	waitbuttonpress
	releaseall
	end
