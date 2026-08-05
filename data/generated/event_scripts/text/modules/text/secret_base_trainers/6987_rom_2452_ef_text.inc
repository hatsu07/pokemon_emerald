	@ data/text/secret_base_trainers.inc:37 SecretBase_Text_Trainer1Intro
	.globl gText_Rom_2452EF
gText_Rom_2452EF: @ 0x082452EF
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだー\pあっ もしかして\nきみも ここを つかいたい?\pうーん ぼくに かてたら\nこのばしょ あげても いいよ!$"
	.if (. - gText_Rom_2452EF) > 0x56
	.error "gText_Rom_2452EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452EF) < 0x56
	.space 0x56 - (. - gText_Rom_2452EF)
	.endif
