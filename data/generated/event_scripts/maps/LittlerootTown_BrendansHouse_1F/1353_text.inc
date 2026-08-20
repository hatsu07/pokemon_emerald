	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:333 PlayersHouse_1F_Text_YouShouldRestABit
	.globl gText_Rom_1EFBF0
gText_Rom_1EFBF0: @ 0x081EFBF0
	.string "ママ『どう? {PLAYER}\nすこし つかれたんじゃ ないかしら?\pおうちで やすんでいくと いいわ{EOS}"
	.if (. - gText_Rom_1EFBF0) > 0x2e
	.error "gText_Rom_1EFBF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFBF0) < 0x2e
	.space 0x2e - (. - gText_Rom_1EFBF0)
	.endif
