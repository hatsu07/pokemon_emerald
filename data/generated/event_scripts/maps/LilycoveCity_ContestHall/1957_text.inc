	@ data/maps/LilycoveCity_ContestHall/scripts.inc:388 LilycoveCity_ContestHall_Text_MyAzurillWasDistracted
	.globl gText_Rom_208086
gText_Rom_208086: @ 0x08208086
	.string "ああ ぼくの ルリリちゃんが\nほかの ポケモンに きを とられちゃった！$"
	.if (. - gText_Rom_208086) > 0x25
	.error "gText_Rom_208086 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208086) < 0x25
	.space 0x25 - (. - gText_Rom_208086)
	.endif
