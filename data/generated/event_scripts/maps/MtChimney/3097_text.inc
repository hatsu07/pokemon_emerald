	@ data/maps/MtChimney/scripts.inc:729 MtChimney_Text_MeteoriteFittedOnMachine
	.globl gText_Rom_215749
gText_Rom_215749: @ 0x08215749
	.string "なぞの そうちに\nいんせきが はめられている……\pなにかの エネルギーを\nためている さいちゅうの ようだ$"
	.if (. - gText_Rom_215749) > 0x36
	.error "gText_Rom_215749 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215749) < 0x36
	.space 0x36 - (. - gText_Rom_215749)
	.endif
