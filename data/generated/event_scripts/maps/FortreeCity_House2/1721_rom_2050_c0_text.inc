	@ data/maps/FortreeCity_House2/scripts.inc:44 FortreeCity_House2_Text_HiddenPowersArousedByNature
	.globl FortreeCity_House2_Text_HiddenPowersArousedByNature
FortreeCity_House2_Text_HiddenPowersArousedByNature: @ 0x08204F53
	.string "ひとも ポケモンも\nしぜんの なかで くらすことで\lもともとの パワーが めざめる……{EOS}"
	.if (. - FortreeCity_House2_Text_HiddenPowersArousedByNature) > 0x2c
	.error "FortreeCity_House2_Text_HiddenPowersArousedByNature may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House2_Text_HiddenPowersArousedByNature) < 0x2c
	.space 0x2c - (. - FortreeCity_House2_Text_HiddenPowersArousedByNature)
	.endif
	@ data/maps/FortreeCity_House2/scripts.inc:47 FortreeCity_House2_Text_CoinInWhichHand
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FortreeCity_House2_Text_CoinInWhichHand
FortreeCity_House2_Text_CoinInWhichHand: @ 0x08204F7F
	.string "おぬしの パワーが めざめているか\nたしかめると するかの……\pどれ…… わしの みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい{EOS}"
	.if (. - FortreeCity_House2_Text_CoinInWhichHand) != 0x56
	.error "FortreeCity_House2_Text_CoinInWhichHand must retain its original byte length"
	.endif
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
	.globl FortreeCity_House2_Text_YourHiddenPowerHasAwoken
FortreeCity_House2_Text_YourHiddenPowerHasAwoken: @ 0x08205051
	.string "おお! みごと じゃ!\nおぬしの パワーは めざめているの!\pこれを あげるから\nおぬしの ポケモンも パワーを\lめざめさせて やると ええぞ!{EOS}"
	.if (. - FortreeCity_House2_Text_YourHiddenPowerHasAwoken) > 0x49
	.error "FortreeCity_House2_Text_YourHiddenPowerHasAwoken may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House2_Text_YourHiddenPowerHasAwoken) < 0x49
	.space 0x49 - (. - FortreeCity_House2_Text_YourHiddenPowerHasAwoken)
	.endif
	@ data/maps/FortreeCity_House2/scripts.inc:59 FortreeCity_House2_Text_ExplainHiddenPower
	.globl FortreeCity_House2_Text_ExplainHiddenPower
FortreeCity_House2_Text_ExplainHiddenPower: @ 0x0820509A
	.string "めざめるパワーは ポケモンによって\nいりょくが かわる わざ なんじゃよ!{EOS}"
	.if (. - FortreeCity_House2_Text_ExplainHiddenPower) > 0x26
	.error "FortreeCity_House2_Text_ExplainHiddenPower may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House2_Text_ExplainHiddenPower) < 0x26
	.space 0x26 - (. - FortreeCity_House2_Text_ExplainHiddenPower)
	.endif
	@ data/maps/FortreeCity_House2/scripts.inc:62 FortreeCity_House2_Text_YouGuessedWrong
	.globl FortreeCity_House2_Text_YouGuessedWrong
FortreeCity_House2_Text_YouGuessedWrong: @ 0x082050C0
	.string "ざんねん……\nはずれ じゃ……{EOS}"
	.if (. - FortreeCity_House2_Text_YouGuessedWrong) > 0x10
	.error "FortreeCity_House2_Text_YouGuessedWrong may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House2_Text_YouGuessedWrong) < 0x10
	.space 0x10 - (. - FortreeCity_House2_Text_YouGuessedWrong)
	.endif
	@ analyzed canonical ROM range 0x082050D0-0x082050E2
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082050D0: @ 0x082050D0
	.byte 0x00
.globl EventScript_JP_082050D1
EventScript_JP_082050D1: @ 0x082050D1
	loadword 0x00, FortreeCity_House3_Text_MetStevenHadAmazingPokemon
	callstd 0x02
	end
.globl EventScript_JP_082050DA
EventScript_JP_082050DA: @ 0x082050DA
	loadword 0x00, FortreeCity_House3_Text_OhYouHavePokedex
	callstd 0x02
	end
