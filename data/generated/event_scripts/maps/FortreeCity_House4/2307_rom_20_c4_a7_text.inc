	@ data/maps/MossdeepCity_House2/scripts.inc:54 MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree
	.globl MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree
MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree: @ 0x0820C43A
	.string "おれの いもうとは ヒワマキの\nボーイフレンドと ぶんつう してる\pちっとも うらやましく ないぞ!{EOS}"
	.if (. - MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree) > 0x33
	.error "MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree) < 0x33
	.space 0x33 - (. - MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree)
	.endif
	@ data/maps/MossdeepCity_House2/scripts.inc:57 MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth
	.globl MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth
MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth: @ 0x0820C46D
	.string "ヒワマキの おともだちに あえなくても\nポケモンが おてがみを はこんでくれるの\lはなれていても さみしくないわ!{EOS}"
	.if (. - MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth) > 0x3a
	.error "MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth) < 0x3a
	.space 0x3a - (. - MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth)
	.endif
	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl gText_Rom_20C4A7
gText_Rom_20C4A7: @ 0x0820C4A7
	.string "キャモメ『ぴひょー!{EOS}"
	.if (. - gText_Rom_20C4A7) > 0xb
	.error "gText_Rom_20C4A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C4A7) < 0xb
	.space 0xb - (. - gText_Rom_20C4A7)
	.endif
	@ analyzed canonical ROM range 0x0820C4B2-0x0820C4E0
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_MossdeepCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x0820C4B2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820C4BD
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_0820C4BD: @ 0x0820C4BD
	setrespawn 0x0009
	end
.globl EventScript_JP_0820C4C1
EventScript_JP_0820C4C1: @ 0x0820C4C1
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0820C4CF
EventScript_JP_0820C4CF: @ 0x0820C4CF
	loadword 0x00, MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable
	callstd 0x02
	end
.globl EventScript_JP_0820C4D8
EventScript_JP_0820C4D8: @ 0x0820C4D8
	loadword 0x00, MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves
	callstd 0x02
	end
