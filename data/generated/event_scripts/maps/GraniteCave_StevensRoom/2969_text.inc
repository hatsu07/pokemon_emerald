	@ data/maps/GraniteCave_StevensRoom/scripts.inc:88 GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister
	.globl gText_Rom_2141A7
gText_Rom_2141A7: @ 0x082141A7
	.string "ダイゴ『きみの ポケモン\nなかなか いい かんじ だね\pしゅぎょうを つづければ\nいつかは ポケモンリーグの\lチャンピオンに だって なれる\lボクは そう おもうな\pそうだ!\nせっかく きみと しりあえたんだ\lおたがい ポケナビに\lなまえを とうろく しておこう!\p…… …… ……{EOS}"
	.if (. - gText_Rom_2141A7) > 0x8e
	.error "gText_Rom_2141A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2141A7) < 0x8e
	.space 0x8e - (. - gText_Rom_2141A7)
	.endif
