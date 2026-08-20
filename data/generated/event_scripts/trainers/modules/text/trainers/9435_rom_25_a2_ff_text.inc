	@ data/text/trainers.inc:308 Route105_Text_FosterPostBattle
	.globl gText_Rom_25A2FF
gText_Rom_25A2FF: @ 0x0825A2FF
	.string "すてきな いわ だったら\nなんじかん みていても あきないよ……{EOS}"
	.if (. - gText_Rom_25A2FF) > 0x21
	.error "gText_Rom_25A2FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A2FF) < 0x21
	.space 0x21 - (. - gText_Rom_25A2FF)
	.endif
