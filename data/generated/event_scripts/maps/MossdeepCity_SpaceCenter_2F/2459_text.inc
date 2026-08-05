	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:402 MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano
	.globl gText_Rom_20DDA9
gText_Rom_20DDA9: @ 0x0820DDA9
	.string "マツブサ『ふふふ……\nそんなに しりたけりゃ おしえてやろう\pえんとつやまの かこうに\nぜんぶ なげこんで やるのさ！\pグラードンも きえてしまった ことだし\nもう あんなやまに ようはない\pだから ねんりょうの ちからを りようして\nかざんを ふんか させて やるのさ\lズドドーン とな！$"
	.if (. - gText_Rom_20DDA9) > 0x92
	.error "gText_Rom_20DDA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DDA9) < 0x92
	.space 0x92 - (. - gText_Rom_20DDA9)
	.endif
