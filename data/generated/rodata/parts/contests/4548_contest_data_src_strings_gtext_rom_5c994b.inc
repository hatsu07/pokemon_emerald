	@ src/strings.c:228 gText_YouWantedVar1ThatllBeVar2
	.globl gText_Rom_5C994B
gText_Rom_5C994B: @ 0x085C994B
	.string "{STR_VAR_1} ですね!\n{STR_VAR_2}円 だけど かいますか?$"
	.if (. - gText_Rom_5C994B) > 0x17
	.error "gText_Rom_5C994B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C994B) < 0x17
	.space 0x17 - (. - gText_Rom_5C994B)
	.endif
