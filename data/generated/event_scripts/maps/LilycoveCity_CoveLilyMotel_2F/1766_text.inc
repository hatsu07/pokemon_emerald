	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:71 LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
	.globl gText_Rom_205978
gText_Rom_205978: @ 0x08205978
	.string "すごいなー!\nいやー すごいよ きみ!!\pこの ポケモンずかん\nぜんぶ あつまって いるんだね!\lそれだけ ポケモンを あいしてるんだね!\pかんどう しました!\nきみを ひょうしょう させてもらいますね!{EOS}"
	.if (. - gText_Rom_205978) > 0x67
	.error "gText_Rom_205978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205978) < 0x67
	.space 0x67 - (. - gText_Rom_205978)
	.endif
