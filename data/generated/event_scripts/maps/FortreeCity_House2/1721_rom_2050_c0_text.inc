	@ data/maps/FortreeCity_House2/scripts.inc:44 FortreeCity_House2_Text_HiddenPowersArousedByNature
	.globl gText_Rom_204F53
gText_Rom_204F53: @ 0x08204F53
	.string "ひとも ポケモンも\nしぜんの なかで くらすことで\lもともとの パワーが めざめる……{EOS}"
	.if (. - gText_Rom_204F53) > 0x2c
	.error "gText_Rom_204F53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204F53) < 0x2c
	.space 0x2c - (. - gText_Rom_204F53)
	.endif
	@ data/maps/FortreeCity_House2/scripts.inc:47 FortreeCity_House2_Text_CoinInWhichHand
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_204F7F
gText_Rom_204F7F: @ 0x08204F7F
	.string "おぬしの パワーが めざめているか\nたしかめると するかの……\pどれ…… わしの みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい{EOS}"
	.if (. - gText_Rom_204F7F) != 0x56
	.error "gText_Rom_204F7F must retain its original byte length"
	.endif
	.globl gText_Rom_204FD1
	.set gText_Rom_204FD1, gText_Rom_204F7F + 0x52
	@ data/maps/FortreeCity_House2/scripts.inc:50 FortreeCity_House2_Text_CorrectTryAgainWhichHand (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_204FD5
gText_Rom_204FD5: @ 0x08204FD5
	.string "おお! せいかい じゃ!\pつぎは みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい{EOS}"
	.if (. - gText_Rom_204FD5) != 0x3e
	.error "gText_Rom_204FD5 must retain its original byte length"
	.endif
	.globl gText_Rom_20500F
	.set gText_Rom_20500F, gText_Rom_204FD5 + 0x3a
	@ data/maps/FortreeCity_House2/scripts.inc:50 FortreeCity_House2_Text_CorrectTryAgainWhichHand (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205013
gText_Rom_205013: @ 0x08205013
	.string "おお! せいかい じゃ!\pつぎは みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい{EOS}"
	.if (. - gText_Rom_205013) != 0x3e
	.error "gText_Rom_205013 must retain its original byte length"
	.endif
	.globl gText_Rom_20504D
	.set gText_Rom_20504D, gText_Rom_205013 + 0x3a
	@ data/maps/FortreeCity_House2/scripts.inc:56 FortreeCity_House2_Text_YourHiddenPowerHasAwoken
	.globl gText_Rom_205051
gText_Rom_205051: @ 0x08205051
	.string "おお! みごと じゃ!\nおぬしの パワーは めざめているの!\pこれを あげるから\nおぬしの ポケモンも パワーを\lめざめさせて やると ええぞ!{EOS}"
	.if (. - gText_Rom_205051) > 0x49
	.error "gText_Rom_205051 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205051) < 0x49
	.space 0x49 - (. - gText_Rom_205051)
	.endif
	@ data/maps/FortreeCity_House2/scripts.inc:59 FortreeCity_House2_Text_ExplainHiddenPower
	.globl gText_Rom_20509A
gText_Rom_20509A: @ 0x0820509A
	.string "めざめるパワーは ポケモンによって\nいりょくが かわる わざ なんじゃよ!{EOS}"
	.if (. - gText_Rom_20509A) > 0x26
	.error "gText_Rom_20509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20509A) < 0x26
	.space 0x26 - (. - gText_Rom_20509A)
	.endif
	@ data/maps/FortreeCity_House2/scripts.inc:62 FortreeCity_House2_Text_YouGuessedWrong
	.globl gText_Rom_2050C0
gText_Rom_2050C0: @ 0x082050C0
	.string "ざんねん……\nはずれ じゃ……{EOS}"
	.if (. - gText_Rom_2050C0) > 0x10
	.error "gText_Rom_2050C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2050C0) < 0x10
	.space 0x10 - (. - gText_Rom_2050C0)
	.endif
	@ analyzed canonical ROM range 0x082050D0-0x082050E2
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082050D0: @ 0x082050D0
	.byte 0x00
.globl EventScript_JP_082050D1
EventScript_JP_082050D1: @ 0x082050D1
	loadword 0x00, gText_Rom_2050E3
	callstd 0x02
	end
.globl EventScript_JP_082050DA
EventScript_JP_082050DA: @ 0x082050DA
	loadword 0x00, gText_Rom_20516E
	callstd 0x02
	end
