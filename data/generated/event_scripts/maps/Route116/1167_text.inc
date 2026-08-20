	@ data/maps/Route116/scripts.inc:382 Route116_Text_ThankYouTokenOfAppreciation
	.globl gText_Rom_1EC094
gText_Rom_1EC094: @ 0x081EC094
	.string "ああっ!\nきみは!!\pトウカのもりで たすけてくれた だけでなく\nぬすまれた にもつを とりかえし\lはたまた カイナへの とどけものを\lこころよく ひきうけてくれた ひと!!\pクスノキかんちょう から\n「にもつが とどいた」と\lれんらくが ありましたよ!\pどうも ありがとう なのです!\nかんしゃ かんげき あめ あられ なのです\pそんな すてきな トレーナーさんに\nグッド ニュース!\pさいきん わがしゃ では\nあたらしい モンスターボールの\lかいはつに せいこう したのです!\pかんしゃの きもちとして\nトレーナーさんにも プレゼント なのよね!{EOS}"
	.if (. - gText_Rom_1EC094) > 0x114
	.error "gText_Rom_1EC094 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC094) < 0x114
	.space 0x114 - (. - gText_Rom_1EC094)
	.endif
