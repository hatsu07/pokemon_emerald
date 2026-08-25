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
