	@ data/maps/Route110_TrickHouseEnd/scripts.inc:253 Route110_TrickHouseEnd_Text_AllNightToPlantTrees
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DABE
gText_Rom_23DABE: @ 0x0823DABE
	.string "てつやで きを うえたのに……\pわがはいの つぎの つぎの つぎの つぎの\nつぎの つぎ くらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DABE) != 0x37
	.error "gText_Rom_23DABE must retain its original byte length"
	.endif
