	@ data/maps/LilycoveCity_ContestHall/scripts.inc:400 LilycoveCity_ContestHall_Text_MyChildIsInContest
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_208151
gText_Rom_208151: @ 0x08208151
	.string "うちのこが コンテストに でてるんですよ{EOS}"
	.if (. - gText_Rom_208151) != 0x15
	.error "gText_Rom_208151 must retain its original byte length"
	.endif
