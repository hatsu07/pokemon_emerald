	@ data/text/trainers.inc:2588 Route124_Text_SpencerPostBattle
	.globl gText_Rom_260123
gText_Rom_260123: @ 0x08260123
	.string "うみで まよってしまう ひとは おおい!\pそんな ひとは ポケナビで\nマップを たしかめながら すすむと いい!{EOS}"
	.if (. - gText_Rom_260123) > 0x39
	.error "gText_Rom_260123 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260123) < 0x39
	.space 0x39 - (. - gText_Rom_260123)
	.endif
