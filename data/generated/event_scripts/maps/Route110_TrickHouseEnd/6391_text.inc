	@ data/maps/Route110_TrickHouseEnd/scripts.inc:256 Route110_TrickHouseEnd_Text_AllNightToMakeMaze
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DAF5
gText_Rom_23DAF5: @ 0x0823DAF5
	.string "てつやで めいろを つくったのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎ くらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DAF5) != 0x36
	.error "gText_Rom_23DAF5 must retain its original byte length"
	.endif
