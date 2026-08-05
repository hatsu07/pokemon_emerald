	@ data/text/trainers.inc:1283 Route113_Text_WyattPostBattle
	.globl gText_Rom_25CAB6
gText_Rom_25CAB6: @ 0x0825CAB6
	.string "はいしゃに こえを かけて くれるって\nいうんですか!\lか カッコいい ですね! ふん!$"
	.if (. - gText_Rom_25CAB6) > 0x2d
	.error "gText_Rom_25CAB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CAB6) < 0x2d
	.space 0x2d - (. - gText_Rom_25CAB6)
	.endif
