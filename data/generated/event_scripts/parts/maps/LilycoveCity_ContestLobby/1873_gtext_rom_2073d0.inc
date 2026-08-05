	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:974 LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase
	.globl gText_Rom_2073D0
gText_Rom_2073D0: @ 0x082073D0
	.string "うわーい!\pうけつけの おねえちゃんから\nポロック いれる ケース もらった!$"
	.if (. - gText_Rom_2073D0) > 0x28
	.error "gText_Rom_2073D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2073D0) < 0x28
	.space 0x28 - (. - gText_Rom_2073D0)
	.endif
