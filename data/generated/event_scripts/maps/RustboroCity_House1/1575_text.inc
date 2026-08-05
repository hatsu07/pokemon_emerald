	@ data/maps/RustboroCity_House1/scripts.inc:42 RustboroCity_House1_Text_YouDontWantToThatsOkay
	.globl gText_Rom_203CF7
gText_Rom_203CF7: @ 0x08203CF7
	.string "あ いやなら いいけど……\nせっかく かわいい ポケモンなのに$"
	.if (. - gText_Rom_203CF7) > 0x20
	.error "gText_Rom_203CF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CF7) < 0x20
	.space 0x20 - (. - gText_Rom_203CF7)
	.endif
