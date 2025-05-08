package pt.iefp.a14_api_v2

import com.google.gson.annotations.Expose
import com.google.gson.annotations.SerializedName


/*

  {
    "postId": 1,
    "id": 1,
    "name": "",
    "email": "",
    "body": ""
  },
 */
class Comment (
    @SerializedName("id") @Expose(serialize = false) val id: Int,

    @SerializedName("postId") val postId: Int,
    @SerializedName("name") val name: String,
    @SerializedName("email") val email: String,
    @SerializedName("body") val body: String,
)