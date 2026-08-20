	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:122 SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot
	.globl gText_Rom_20FAF3
gText_Rom_20FAF3: @ 0x0820FAF3
	.string "おお こいつは なかなか…… って\nこれ タネボーじゃ ないよ!{EOS}"
	.if (. - gText_Rom_20FAF3) > 0x21
	.error "gText_Rom_20FAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FAF3) < 0x21
	.space 0x21 - (. - gText_Rom_20FAF3)
	.endif
