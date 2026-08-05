	@ data/maps/DewfordTown/scripts.inc:687 DewfordTown_Text_FishingAdvice
	.globl gText_Rom_1E5420
gText_Rom_1E5420: @ 0x081E5420
	.string "なんだよ ガッカリ しないでよ!\nつりの コツを おしえて あげるから!\pまずは すいめんに むかって\nつりざおを つかう!\pそして きもちを しゅうちゅう させ……\nひいてる ひいてる!! となったら\lすばやく つりざおを ひくんだ!\pすぐに ひきあげられる ときも あるけど\nおおものは なんども タイミングを\lあわせる ひつようが あるんだよ!$"
	.if (. - gText_Rom_1E5420) > 0xb0
	.error "gText_Rom_1E5420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5420) < 0xb0
	.space 0xb0 - (. - gText_Rom_1E5420)
	.endif
