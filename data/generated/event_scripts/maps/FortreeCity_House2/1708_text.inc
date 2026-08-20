	@ data/maps/FortreeCity_House2/scripts.inc:47 FortreeCity_House2_Text_CoinInWhichHand
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_204F7F
gText_Rom_204F7F: @ 0x08204F7F
	.string "おぬしの パワーが めざめているか\nたしかめると するかの……\pどれ…… わしの みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい{EOS}"
	.if (. - gText_Rom_204F7F) != 0x56
	.error "gText_Rom_204F7F must retain its original byte length"
	.endif
