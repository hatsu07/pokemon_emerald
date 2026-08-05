	@ field-script:0x211B1C FieldScriptText_211C09
	.globl gText_Rom_211C09
gText_Rom_211C09: @ 0x08211C09
	.string "この　きょうせいギプスを　つかって\nわたしたち　かぞくは\lポケモンを　きたえて　います！\pわたしたち　かぞく　ぜんいんに　かった\nあなたには　ひつようない　かもしれませんが\lぜひ　うけとって　くださいな！$"
	.if (. - gText_Rom_211C09) > 0x67
	.error "gText_Rom_211C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211C09) < 0x67
	.space 0x67 - (. - gText_Rom_211C09)
	.endif
