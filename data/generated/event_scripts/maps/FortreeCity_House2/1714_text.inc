	@ data/maps/FortreeCity_House2/scripts.inc:50 FortreeCity_House2_Text_CorrectTryAgainWhichHand (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205013
gText_Rom_205013: @ 0x08205013
	.string "おお! せいかい じゃ!\pつぎは みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい$"
	.if (. - gText_Rom_205013) != 0x3e
	.error "gText_Rom_205013 must retain its original byte length"
	.endif
