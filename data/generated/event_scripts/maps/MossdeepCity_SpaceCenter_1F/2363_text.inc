	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:284 MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20D0FD
gText_Rom_20D0FD: @ 0x0820D0FD
	.string "こんな さわぎの とちゅう だけど……\pもうすぐ ロケットが はっしゃ するぞ!$"
	.if (. - gText_Rom_20D0FD) != 0x29
	.error "gText_Rom_20D0FD must retain its original byte length"
	.endif
