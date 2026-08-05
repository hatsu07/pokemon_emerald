	@ data/text/tv.inc:1075 SlateportCity_OceanicMuseum_1F_Text_TellMeExperienceInvolvingPokemon
	.globl gText_Rom_24D8DB
gText_Rom_24D8DB: @ 0x0824D8DB
	.string "おお きかせて くれますか!\nありがとう ございます\pでは さいきん おきたこと なら\nなんでも よいので\lはなしを きかせて ください!$"
	.if (. - gText_Rom_24D8DB) > 0x46
	.error "gText_Rom_24D8DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D8DB) < 0x46
	.space 0x46 - (. - gText_Rom_24D8DB)
	.endif
