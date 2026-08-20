	@ data/maps/Route110_TrickHousePuzzle7/scripts.inc:326 Route110_TrickHousePuzzle7_Text_JoshuaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2402BC
gText_Rom_2402BC: @ 0x082402BC
	.string "ぼくも じゆう じざいに\nきえたり あらわれたり してみたいな{EOS}"
	.if (. - gText_Rom_2402BC) != 0x20
	.error "gText_Rom_2402BC must retain its original byte length"
	.endif
