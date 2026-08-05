	@ data/maps/PetalburgWoods/scripts.inc:449 PetalburgWoods_Text_TrainerTipsExperience
	.globl gText_Rom_214AB1
gText_Rom_214AB1: @ 0x08214AB1
	.string "おとくな けいじばん!!\pしょうぶの とき\nいちど でも かおをだした ポケモンは\lけいけんちが もらえます!\pよわい ポケモンを リストの ひだりにして\nしょうぶのとき すぐに こうたい!\lこれで よわい ポケモンも そだちます!$"
	.if (. - gText_Rom_214AB1) > 0x75
	.error "gText_Rom_214AB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214AB1) < 0x75
	.space 0x75 - (. - gText_Rom_214AB1)
	.endif
