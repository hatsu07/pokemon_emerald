	@ data/maps/Route110_TrickHouseEnd/scripts.inc:268 Route110_TrickHouseEnd_Text_AllNightToInstallDoors
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DBC8
gText_Rom_23DBC8: @ 0x0823DBC8
	.string "てつやで とびらを とりつけたのに……\pわがはいの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DBC8) != 0x27
	.error "gText_Rom_23DBC8 must retain its original byte length"
	.endif
