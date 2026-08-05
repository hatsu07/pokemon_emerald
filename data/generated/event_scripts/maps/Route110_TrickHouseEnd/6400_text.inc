	@ data/maps/Route110_TrickHouseEnd/scripts.inc:265 Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23DB8D
gText_Rom_23DB8D: @ 0x0823DB8D
	.string "てつやで にんぎょう つくって\nてつやで クイズも かんがえたのに……\pわがはいの つぎの つぎ\nくらいに すごい!"
	.byte EOS
	.if (. - gText_Rom_23DB8D) != 0x3b
	.error "gText_Rom_23DB8D must retain its original byte length"
	.endif
