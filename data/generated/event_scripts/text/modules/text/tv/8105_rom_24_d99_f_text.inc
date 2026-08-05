	@ data/text/tv.inc:1084 SlateportCity_OceanicMuseum_1F_Text_BetterWriteUpStory
	.globl gText_Rom_24D99F
gText_Rom_24D99F: @ 0x0824D99F
	.string "うーん\nいい テレビばんぐみが できそうだ!\pいそいで まとめないと!$"
	.if (. - gText_Rom_24D99F) > 0x24
	.error "gText_Rom_24D99F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D99F) < 0x24
	.space 0x24 - (. - gText_Rom_24D99F)
	.endif
