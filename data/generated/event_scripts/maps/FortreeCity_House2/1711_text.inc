	@ data/maps/FortreeCity_House2/scripts.inc:50 FortreeCity_House2_Text_CorrectTryAgainWhichHand (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_204FD5
gText_Rom_204FD5: @ 0x08204FD5
	.string "おお! せいかい じゃ!\pつぎは みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい{EOS}"
	.if (. - gText_Rom_204FD5) != 0x3e
	.error "gText_Rom_204FD5 must retain its original byte length"
	.endif
