	@ data/text/berries.inc:148 Route104_PrettyPetalFlowerShop_Text_BerriesExplanation
	.globl gText_Rom_263D0D
gText_Rom_263D0D: @ 0x08263D0D
	.string "きのみはね くろい ふかふかの つちの\nところで たまに とれるの\lでね……\pとったら その1つを また うめるの!\pそうすると その きのみ から\nめがでて みきが できて はながさいて\lまた きのみ が できるの\pそうやって はなを ふやして\nせかいじゅうを はなに するのが\lわたしの ゆめ なんだ!\pだから {PLAYER}{KUN}も きのみを うめて\nせかいに はなを ふやしてね!$"
	.if (. - gText_Rom_263D0D) > 0xbd
	.error "gText_Rom_263D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263D0D) < 0xbd
	.space 0xbd - (. - gText_Rom_263D0D)
	.endif
