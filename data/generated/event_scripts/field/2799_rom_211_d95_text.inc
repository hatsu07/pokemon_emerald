	@ field-script:0x211AFE FieldScriptText_211BA1
	.globl gText_Rom_211BA1
gText_Rom_211BA1: @ 0x08211BA1
	.string "きみほど　ポケモンを　じょうずに\nつかいこなす　トレーナーは　はじめてだ！\pだが　きみよりも\nわたしの　むすこの　ほうが　つよいぞ！\pなんたって　ポケモン　リーグへ\nちょうせんに　いった　ぐらい　だからな！{EOS}"
	.if (. - gText_Rom_211BA1) > 0x68
	.error "gText_Rom_211BA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211BA1) < 0x68
	.space 0x68 - (. - gText_Rom_211BA1)
	.endif
	@ field-script:0x211B1C FieldScriptText_211C09
	.globl gText_Rom_211C09
gText_Rom_211C09: @ 0x08211C09
	.string "この　きょうせいギプスを　つかって\nわたしたち　かぞくは\lポケモンを　きたえて　います！\pわたしたち　かぞく　ぜんいんに　かった\nあなたには　ひつようない　かもしれませんが\lぜひ　うけとって　くださいな！{EOS}"
	.if (. - gText_Rom_211C09) > 0x67
	.error "gText_Rom_211C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211C09) < 0x67
	.space 0x67 - (. - gText_Rom_211C09)
	.endif
	@ field-script:0x211B44 FieldScriptText_211C70
	.globl gText_Rom_211C70
gText_Rom_211C70: @ 0x08211C70
	.string "わたしたちは　ポケモンでの　しょうぶに\nじょうねつを　そそいで　います！{EOS}"
	.if (. - gText_Rom_211C70) > 0x25
	.error "gText_Rom_211C70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211C70) < 0x25
	.space 0x25 - (. - gText_Rom_211C70)
	.endif
	@ field-script:0x211B59 FieldScriptText_211C95
	.globl gText_Rom_211C95
gText_Rom_211C95: @ 0x08211C95
	.string "パパより　ママが　つよくて\pママより　あたしが　つよくて\pあたしより　おばあちゃんが　つよくて\pでも　おばあちゃんより　つよかったのが\nあたしの　あにき　なの！{EOS}"
	.if (. - gText_Rom_211C95) > 0x51
	.error "gText_Rom_211C95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211C95) < 0x51
	.space 0x51 - (. - gText_Rom_211C95)
	.endif
	@ field-script:0x211B77 FieldScriptText_211CE6
	.globl gText_Rom_211CE6
gText_Rom_211CE6: @ 0x08211CE6
	.string "あんたが　いくら　つよくても\nわしの　まごに　あったら\lかてなくて　なきだすこと　じゃろう……\pわしら　かぞくが　しってる　トレーナーの\nだれよりも　つよかった　からのう！\pまごの　やつも　いまごろは\nポケモンリーグの　チャンピオンに\lちょうせん　しているの　じゃろうか？\pそれとも　わしの　まご　じゃから\nもう　チャンピオン　かもな……　ウヒヒ！{EOS}"
	.if (. - gText_Rom_211CE6) > 0xaf
	.error "gText_Rom_211CE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211CE6) < 0xaf
	.space 0xaf - (. - gText_Rom_211CE6)
	.endif
	@ field-script:0x211B88 FieldScriptText_211D95
	.globl gText_Rom_211D95
gText_Rom_211D95: @ 0x08211D95
	.string "まごの　やつも　いまごろは\nポケモンリーグの　チャンピオンに\lちょうせん　しているの　じゃろうか？\pそれとも　わしの　まご　じゃから\nもう　チャンピオン　かもな……　ウヒヒ！{EOS}"
	.if (. - gText_Rom_211D95) > 0x58
	.error "gText_Rom_211D95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211D95) < 0x58
	.space 0x58 - (. - gText_Rom_211D95)
	.endif
	@ analyzed canonical ROM range 0x08211DED-0x08211E4E
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_Route111_OldLadysRestStop_OnTransition: @ 0x08211DED
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08211DF3
	.byte 0
EventScript_JP_08211DF3: @ 0x08211DF3
	setflag 0x08A1
	end
.globl EventScript_JP_08211DF7
EventScript_JP_08211DF7: @ 0x08211DF7
	lock
	faceplayer
	loadword 0x00, gText_Rom_211E4F
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08211E18
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08211E45
	end
EventScript_JP_08211E18: @ 0x08211E18
	loadword 0x00, gText_Rom_211E90
	callstd 0x04
	closemessage
	call 0x0824310F
	loadword 0x00, gText_Rom_211EA6
	callstd 0x05
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08211E18
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08211E45
	end
EventScript_JP_08211E45: @ 0x08211E45
	loadword 0x00, gText_Rom_211EE0
	callstd 0x04
	release
	end
