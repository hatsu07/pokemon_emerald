	@ data/maps/DewfordTown/scripts.inc:675 DewfordTown_Text_ThrowInFishingAdvice
	.globl gText_Rom_1E5334
gText_Rom_1E5334: @ 0x081E5334
	.string "よーしっ だいサービス!\nつりの コツも せつめい しておくよ!\pまずは すいめんに むかって\nつりざおを つかう!\pそして きもちを しゅうちゅう させ……\nひいてる ひいてる!! となったら\lすばやく つりざおを ひくんだ!\pすぐに ひきあげられる ときも あるけど\nおおものは なんども タイミングを\lあわせる ひつようが あるんだよ!$"
	.if (. - gText_Rom_1E5334) > 0xac
	.error "gText_Rom_1E5334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5334) < 0xac
	.space 0xac - (. - gText_Rom_1E5334)
	.endif
