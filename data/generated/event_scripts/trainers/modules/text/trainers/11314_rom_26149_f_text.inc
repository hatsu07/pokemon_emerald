	@ data/text/trainers.inc:3050 Route128_Text_HarrisonPostBattle
	.globl gText_Rom_26149F
gText_Rom_26149F: @ 0x0826149F
	.string "サイユウシティの まわりは\nつよそーな トレーナーが いっぱいだぜ!\lオレ ばちがいじゃ ないよな?{EOS}"
	.if (. - gText_Rom_26149F) > 0x33
	.error "gText_Rom_26149F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26149F) < 0x33
	.space 0x33 - (. - gText_Rom_26149F)
	.endif
