	@ data/maps/LilycoveCity_ContestHall/scripts.inc:376 LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon
	.globl gText_Rom_207FA1
gText_Rom_207FA1: @ 0x08207FA1
	.string "うわっはっは！\pべっぴんな ポケモンちゃん が\nいっぱいだ……\lこりゃ はなやかで ええのう！{EOS}"
	.if (. - gText_Rom_207FA1) > 0x30
	.error "gText_Rom_207FA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207FA1) < 0x30
	.space 0x30 - (. - gText_Rom_207FA1)
	.endif
